/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2022 MediaTek Inc.
 */

#ifndef __LINUX_REGULATOR_MT6377_H
#define __LINUX_REGULATOR_MT6377_H

enum {
	MT6377_ID_VBUCK1,
	MT6377_ID_VBUCK2,
	MT6377_ID_VBUCK3,
	MT6377_ID_VBUCK4,
	MT6377_ID_VBUCK5,
	MT6377_ID_VBUCK6,
	MT6377_ID_VS1,
	MT6377_ID_VS2,
	MT6377_ID_VPA,
	MT6377_ID_VBUCK3_SSHUB,
	MT6377_ID_VBUCK4_SSHUB,
	MT6377_ID_VSRAM_OTHERS_SSHUB,
	MT6377_ID_VSRAM_MD,
	MT6377_ID_VSRAM_PROC1,
	MT6377_ID_VSRAM_PROC2,
	MT6377_ID_VSRAM_OTHERS,
	MT6377_ID_VA12,
	MT6377_ID_VAUD18,
	MT6377_ID_VAUD28,
	MT6377_ID_VAUX18,
	MT6377_ID_VBIF28,
	MT6377_ID_VCN33_1,
	MT6377_ID_VCN33_2,
	MT6377_ID_VCN18,
	MT6377_ID_VRFCK,
	MT6377_ID_VBBCK,
	MT6377_ID_VXO22,
	MT6377_ID_VM18,
	MT6377_ID_VEFUSE,
	MT6377_ID_VEMC,
	MT6377_ID_VUFS,
	MT6377_ID_VIO18,
	MT6377_ID_VRF18,
	MT6377_ID_VRF12,
	MT6377_ID_VRF09,
	MT6377_ID_VRFVA12,
	MT6377_ID_VRFIO18,
	MT6377_ID_VMCH,
	MT6377_ID_VMC,
	MT6377_ID_VUSB,
	MT6377_ID_VIBR,
	MT6377_ID_VIO28,
	MT6377_ID_VFP,
	MT6377_ID_VTP,
	MT6377_ID_VMCH_EINT_HIGH,
	MT6377_ID_VMCH_EINT_LOW,
	MT6377_ID_ISINK_LOAD,
	MT6377_MAX_REGULATOR,

};

#define MTK_REGULATOR_MAX_NR MT6377_MAX_REGULATOR

/* Register */
#define MT6377_VM_MODE_ADDR                         (0x3c)
#define MT6377_RG_BUCK_VBUCK1_VOSEL_ADDR            (0x24d)
#define MT6377_RG_BUCK_VBUCK1_VOSEL_MASK            (0xff)
#define MT6377_RG_BUCK_VBUCK2_VOSEL_ADDR            (0x24e)
#define MT6377_RG_BUCK_VBUCK2_VOSEL_MASK            (0xff)
#define MT6377_RG_BUCK_VBUCK3_VOSEL_ADDR            (0x24f)
#define MT6377_RG_BUCK_VBUCK3_VOSEL_MASK            (0xff)
#define MT6377_RG_BUCK_VBUCK4_VOSEL_ADDR            (0x250)
#define MT6377_RG_BUCK_VBUCK4_VOSEL_MASK            (0xff)
#define MT6377_RG_BUCK_VBUCK5_VOSEL_ADDR            (0x251)
#define MT6377_RG_BUCK_VBUCK5_VOSEL_MASK            (0xff)
#define MT6377_RG_BUCK_VBUCK6_VOSEL_ADDR            (0x252)
#define MT6377_RG_BUCK_VBUCK6_VOSEL_MASK            (0xff)
#define MT6377_RG_BUCK_VS1_VOSEL_ADDR               (0x253)
#define MT6377_RG_BUCK_VS1_VOSEL_MASK               (0xff)
#define MT6377_RG_BUCK_VS2_VOSEL_ADDR               (0x254)
#define MT6377_RG_BUCK_VS2_VOSEL_MASK               (0xff)
#define MT6377_RG_BUCK_VPA_VOSEL_ADDR               (0x257)
#define MT6377_RG_BUCK_VPA_VOSEL_MASK               (0x7f)
#define MT6377_RG_LDO_VSRAM_MD_VOSEL_ADDR           (0x258)
#define MT6377_RG_LDO_VSRAM_MD_VOSEL_MASK           (0x7f)
#define MT6377_RG_LDO_VSRAM_PROC1_VOSEL_ADDR        (0x259)
#define MT6377_RG_LDO_VSRAM_PROC1_VOSEL_MASK        (0x7f)
#define MT6377_RG_LDO_VSRAM_PROC2_VOSEL_ADDR        (0x25a)
#define MT6377_RG_LDO_VSRAM_PROC2_VOSEL_MASK        (0x7f)
#define MT6377_RG_LDO_VSRAM_OTHERS_VOSEL_ADDR       (0x25b)
#define MT6377_RG_LDO_VSRAM_OTHERS_VOSEL_MASK       (0x7f)
#define MT6377_BUCK_VBUCK1_OP_EN_0                  (0x148d)
#define MT6377_BUCK_VBUCK2_OP_EN_0                  (0x150d)
#define MT6377_BUCK_VBUCK3_OP_EN_0                  (0x158d)
#define MT6377_BUCK_VBUCK4_OP_EN_0                  (0x160d)
#define MT6377_BUCK_VBUCK5_OP_EN_0                  (0x168d)
#define MT6377_BUCK_VBUCK6_OP_EN_0                  (0x170d)
#define MT6377_BUCK_VS1_OP_EN_0                     (0x178d)
#define MT6377_BUCK_VS2_OP_EN_0                     (0x180d)
#define MT6377_RG_BUCK_VBUCK1_EN_ADDR               (0x1496)
#define MT6377_RG_BUCK_VBUCK1_EN_SHIFT              (0)
#define MT6377_RG_BUCK_VBUCK1_LP_ADDR               (0x1496)
#define MT6377_RG_BUCK_VBUCK1_LP_SHIFT              (1)
#define MT6377_DA_VBUCK1_EN_ADDR	            (0x1499)
#define MT6377_RG_BUCK_VBUCK2_EN_ADDR               (0x1516)
#define MT6377_RG_BUCK_VBUCK2_EN_SHIFT              (0)
#define MT6377_RG_BUCK_VBUCK2_LP_ADDR               (0x1516)
#define MT6377_RG_BUCK_VBUCK2_LP_SHIFT              (1)
#define MT6377_DA_VBUCK2_EN_ADDR                    (0x1519)
#define MT6377_RG_BUCK_VBUCK3_EN_ADDR               (0x1596)
#define MT6377_RG_BUCK_VBUCK3_EN_SHIFT              (0)
#define MT6377_RG_BUCK_VBUCK3_LP_ADDR               (0x1596)
#define MT6377_RG_BUCK_VBUCK3_LP_SHIFT              (1)
#define MT6377_DA_VBUCK3_EN_ADDR                    (0x1599)
#define MT6377_RG_BUCK_VBUCK4_EN_ADDR               (0x1616)
#define MT6377_RG_BUCK_VBUCK4_EN_SHIFT              (0)
#define MT6377_RG_BUCK_VBUCK4_LP_ADDR               (0x1616)
#define MT6377_RG_BUCK_VBUCK4_LP_SHIFT              (1)
#define MT6377_DA_VBUCK4_EN_ADDR                    (0x1619)
#define MT6377_RG_BUCK_VBUCK5_EN_ADDR               (0x1696)
#define MT6377_RG_BUCK_VBUCK5_EN_SHIFT              (0)
#define MT6377_RG_BUCK_VBUCK5_LP_ADDR               (0x1696)
#define MT6377_RG_BUCK_VBUCK5_LP_SHIFT              (1)
#define MT6377_DA_VBUCK5_EN_ADDR                    (0x1699)
#define MT6377_RG_BUCK_VBUCK6_EN_ADDR               (0x1716)
#define MT6377_RG_BUCK_VBUCK6_EN_SHIFT              (0)
#define MT6377_RG_BUCK_VBUCK6_LP_ADDR               (0x1716)
#define MT6377_RG_BUCK_VBUCK6_LP_SHIFT              (1)
#define MT6377_DA_VBUCK6_EN_ADDR                    (0x1719)
#define MT6377_RG_BUCK_VS1_EN_ADDR                  (0x1796)
#define MT6377_RG_BUCK_VS1_EN_SHIFT                 (0)
#define MT6377_RG_BUCK_VS1_LP_ADDR                  (0x1796)
#define MT6377_RG_BUCK_VS1_LP_SHIFT                 (1)
#define MT6377_DA_VS1_EN_ADDR                       (0x1799)
#define MT6377_RG_BUCK_VS2_EN_ADDR                  (0x1816)
#define MT6377_RG_BUCK_VS2_EN_SHIFT                 (0)
#define MT6377_RG_BUCK_VS2_LP_ADDR                  (0x1816)
#define MT6377_RG_BUCK_VS2_LP_SHIFT                 (1)
#define MT6377_DA_VS2_EN_ADDR                       (0x1819)
#define MT6377_RG_BUCK_VPA_EN_ADDR                  (0x243)
#define MT6377_RG_BUCK_VPA_EN_SHIFT                 (3)
#define MT6377_RG_BUCK_VPA_LP_ADDR                  (0x249)
#define MT6377_RG_BUCK_VPA_LP_SHIFT                 (3)
#define MT6377_RG_VBUCK5_FCCM_ADDR                  (0x1918)
#define MT6377_RG_VBUCK5_FCCM_SHIFT                 (0)
#define MT6377_RG_VBUCK6_FCCM_ADDR                  (0x1928)
#define MT6377_RG_VBUCK6_FCCM_SHIFT                 (0)
#define MT6377_RG_VS1_FCCM_ADDR                     (0x1938)
#define MT6377_RG_VS1_FCCM_SHIFT                    (0)
#define MT6377_RG_VS2_FCCM_ADDR                     (0x1948)
#define MT6377_RG_VS2_FCCM_SHIFT                    (0)
#define MT6377_RG_VPA_MODESET_ADDR                  (0x19c1)
#define MT6377_RG_VPA_MODESET_SHIFT                 (0)
#define MT6377_RG_VBUCK1_FCCM_ADDR                  (0x19b2)
#define MT6377_RG_VBUCK1_FCCM_SHIFT                 (0)
#define MT6377_RG_VBUCK2_FCCM_ADDR                  (0x19b2)
#define MT6377_RG_VBUCK2_FCCM_SHIFT                 (1)
#define MT6377_RG_VBUCK3_FCCM_ADDR                  (0x19b2)
#define MT6377_RG_VBUCK3_FCCM_SHIFT                 (2)
#define MT6377_RG_VBUCK4_FCCM_ADDR                  (0x19b2)
#define MT6377_RG_VBUCK4_FCCM_SHIFT                 (3)
#define MT6377_RG_VEMC_VOSEL_0_ADDR                 (0x1b51)
#define MT6377_RG_VEMC_VOSEL_0_MASK                 (0xf)
#define MT6377_RG_VEMC_VOCAL_0_ADDR                 (0x1b51)
#define MT6377_RG_VEMC_VOCAL_0_MASK                 (0xf0)
#define MT6377_RG_LDO_VA12_EN_ADDR                  (0x1b87)
#define MT6377_RG_LDO_VA12_EN_SHIFT                 (0)
#define MT6377_RG_LDO_VA12_LP_ADDR                  (0x1b87)
#define MT6377_RG_LDO_VA12_LP_SHIFT                 (1)
#define MT6377_DA_VA12_B_LP_ADDR                    (0x1b8b)
#define MT6377_RG_LDO_VAUD18_EN_ADDR                (0x1b95)
#define MT6377_RG_LDO_VAUD18_EN_SHIFT               (0)
#define MT6377_RG_LDO_VAUD18_LP_ADDR                (0x1b95)
#define MT6377_RG_LDO_VAUD18_LP_SHIFT               (1)
#define MT6377_DA_VAUD18_B_LP_ADDR                  (0x1b99)
#define MT6377_RG_LDO_VAUD28_EN_ADDR                (0x1ba3)
#define MT6377_RG_LDO_VAUD28_EN_SHIFT               (0)
#define MT6377_RG_LDO_VAUD28_LP_ADDR                (0x1ba3)
#define MT6377_RG_LDO_VAUD28_LP_SHIFT               (1)
#define MT6377_DA_VAUD28_B_LP_ADDR                  (0x1ba7)
#define MT6377_RG_LDO_VAUX18_EN_ADDR                (0x1bb1)
#define MT6377_RG_LDO_VAUX18_EN_SHIFT               (0)
#define MT6377_RG_LDO_VAUX18_LP_ADDR                (0x1bb1)
#define MT6377_RG_LDO_VAUX18_LP_SHIFT               (1)
#define MT6377_DA_VAUX18_B_LP_ADDR                  (0x1bb5)
#define MT6377_RG_LDO_VBIF28_EN_ADDR                (0x1bbf)
#define MT6377_RG_LDO_VBIF28_EN_SHIFT               (0)
#define MT6377_RG_LDO_VBIF28_LP_ADDR                (0x1bbf)
#define MT6377_RG_LDO_VBIF28_LP_SHIFT               (1)
#define MT6377_DA_VBIF28_B_LP_ADDR                  (0x1bc3)
#define MT6377_RG_LDO_VCN33_1_EN_ADDR               (0x1bcd)
#define MT6377_RG_LDO_VCN33_1_EN_SHIFT              (0)
#define MT6377_RG_LDO_VCN33_1_LP_ADDR               (0x1bcd)
#define MT6377_RG_LDO_VCN33_1_LP_SHIFT              (1)
#define MT6377_DA_VCN33_1_B_LP_ADDR                 (0x1bd1)
#define MT6377_RG_LDO_VCN33_2_EN_ADDR               (0x1c07)
#define MT6377_RG_LDO_VCN33_2_EN_SHIFT              (0)
#define MT6377_RG_LDO_VCN33_2_LP_ADDR               (0x1c07)
#define MT6377_RG_LDO_VCN33_2_LP_SHIFT              (1)
#define MT6377_DA_VCN33_2_B_LP_ADDR                 (0x1c0b)
#define MT6377_RG_LDO_VCN18_EN_ADDR                 (0x1c15)
#define MT6377_RG_LDO_VCN18_EN_SHIFT                (0)
#define MT6377_RG_LDO_VCN18_LP_ADDR                 (0x1c15)
#define MT6377_RG_LDO_VCN18_LP_SHIFT                (1)
#define MT6377_DA_VCN18_B_LP_ADDR                   (0x1c19)
#define MT6377_RG_LDO_VRFCK_EN_ADDR                 (0x1c23)
#define MT6377_RG_LDO_VRFCK_EN_SHIFT                (0)
#define MT6377_RG_LDO_VRFCK_LP_ADDR                 (0x1c23)
#define MT6377_RG_LDO_VRFCK_LP_SHIFT                (1)
#define MT6377_DA_VRFCK_B_LP_ADDR                   (0x1c27)
#define MT6377_RG_LDO_VBBCK_EN_ADDR                 (0x1c31)
#define MT6377_RG_LDO_VBBCK_EN_SHIFT                (0)
#define MT6377_RG_LDO_VBBCK_LP_ADDR                 (0x1c31)
#define MT6377_RG_LDO_VBBCK_LP_SHIFT                (1)
#define MT6377_DA_VBBCK_B_LP_ADDR                   (0x1c35)
#define MT6377_RG_LDO_VXO22_EN_ADDR                 (0x1c3f)
#define MT6377_RG_LDO_VXO22_EN_SHIFT                (0)
#define MT6377_RG_LDO_VXO22_LP_ADDR                 (0x1c3f)
#define MT6377_RG_LDO_VXO22_LP_SHIFT                (1)
#define MT6377_DA_VXO22_B_LP_ADDR                   (0x1c43)
#define MT6377_RG_LDO_VM18_EN_ADDR                  (0x1c4d)
#define MT6377_RG_LDO_VM18_EN_SHIFT                 (0)
#define MT6377_RG_LDO_VM18_LP_ADDR                  (0x1c4d)
#define MT6377_RG_LDO_VM18_LP_SHIFT                 (1)
#define MT6377_DA_VM18_B_LP_ADDR                    (0x1c51)
#define MT6377_RG_LDO_VEFUSE_EN_ADDR                (0x1ca3)
#define MT6377_RG_LDO_VEFUSE_EN_SHIFT               (0)
#define MT6377_RG_LDO_VEFUSE_LP_ADDR                (0x1ca3)
#define MT6377_RG_LDO_VEFUSE_LP_SHIFT               (1)
#define MT6377_DA_VEFUSE_B_LP_ADDR                  (0x1ca7)
#define MT6377_RG_LDO_VEMC_EN_ADDR                  (0x1cb1)
#define MT6377_RG_LDO_VEMC_EN_SHIFT                 (0)
#define MT6377_RG_LDO_VEMC_LP_ADDR                  (0x1cb1)
#define MT6377_RG_LDO_VEMC_LP_SHIFT                 (1)
#define MT6377_DA_VEMC_B_LP_ADDR                    (0x1cb5)
#define MT6377_RG_LDO_VUFS_EN_ADDR                  (0x1cbf)
#define MT6377_RG_LDO_VUFS_EN_SHIFT                 (0)
#define MT6377_RG_LDO_VUFS_LP_ADDR                  (0x1cbf)
#define MT6377_RG_LDO_VUFS_LP_SHIFT                 (1)
#define MT6377_DA_VUFS_B_LP_ADDR                    (0x1cc3)
#define MT6377_RG_LDO_VIO18_EN_ADDR                 (0x1ccd)
#define MT6377_RG_LDO_VIO18_EN_SHIFT                (0)
#define MT6377_RG_LDO_VIO18_LP_ADDR                 (0x1ccd)
#define MT6377_RG_LDO_VIO18_LP_SHIFT                (1)
#define MT6377_DA_VIO18_B_LP_ADDR                   (0x1cd1)
#define MT6377_RG_LDO_VRF18_EN_ADDR                 (0x1d07)
#define MT6377_RG_LDO_VRF18_EN_SHIFT                (0)
#define MT6377_RG_LDO_VRF18_LP_ADDR                 (0x1d07)
#define MT6377_RG_LDO_VRF18_LP_SHIFT                (1)
#define MT6377_DA_VRF18_B_LP_ADDR                   (0x1d0b)
#define MT6377_RG_LDO_VRF12_EN_ADDR                 (0x1d15)
#define MT6377_RG_LDO_VRF12_EN_SHIFT                (0)
#define MT6377_RG_LDO_VRF12_LP_ADDR                 (0x1d15)
#define MT6377_RG_LDO_VRF12_LP_SHIFT                (1)
#define MT6377_DA_VRF12_B_LP_ADDR                   (0x1d19)
#define MT6377_RG_LDO_VRF09_EN_ADDR                 (0x1d23)
#define MT6377_RG_LDO_VRF09_EN_SHIFT                (0)
#define MT6377_RG_LDO_VRF09_LP_ADDR                 (0x1d23)
#define MT6377_RG_LDO_VRF09_LP_SHIFT                (1)
#define MT6377_DA_VRF09_B_LP_ADDR                   (0x1d27)
#define MT6377_RG_LDO_VRFVA12_EN_ADDR               (0x1d31)
#define MT6377_RG_LDO_VRFVA12_EN_SHIFT              (0)
#define MT6377_RG_LDO_VRFVA12_LP_ADDR               (0x1d31)
#define MT6377_RG_LDO_VRFVA12_LP_SHIFT              (1)
#define MT6377_DA_VRFVA12_B_LP_ADDR                 (0x1d35)
#define MT6377_RG_LDO_VRFIO18_EN_ADDR               (0x1d3f)
#define MT6377_RG_LDO_VRFIO18_EN_SHIFT              (0)
#define MT6377_RG_LDO_VRFIO18_LP_ADDR               (0x1d3f)
#define MT6377_RG_LDO_VRFIO18_LP_SHIFT              (1)
#define MT6377_DA_VRFIO18_B_LP_ADDR                 (0x1d43)
#define MT6377_RG_LDO_VMCH_EN_ADDR                  (0x1d4d)
#define MT6377_RG_LDO_VMCH_EN_SHIFT                 (0)
#define MT6377_RG_LDO_VMCH_LP_ADDR                  (0x1d4d)
#define MT6377_RG_LDO_VMCH_LP_SHIFT                 (1)
#define MT6377_DA_VMCH_B_LP_ADDR                    (0x1d51)
#define MT6377_RG_LDO_VMC_EN_ADDR                   (0x1d87)
#define MT6377_RG_LDO_VMC_EN_SHIFT                  (0)
#define MT6377_RG_LDO_VMC_LP_ADDR                   (0x1d87)
#define MT6377_RG_LDO_VMC_LP_SHIFT                  (1)
#define MT6377_DA_VMC_B_LP_ADDR                     (0x1d8b)
#define MT6377_RG_LDO_VSIM1_EN_ADDR                 (0x1d95)
#define MT6377_RG_LDO_VSIM1_EN_SHIFT                (0)
#define MT6377_RG_LDO_VSIM1_LP_ADDR                 (0x1d95)
#define MT6377_RG_LDO_VSIM1_LP_SHIFT                (1)
#define MT6377_DA_VSIM1_B_LP_ADDR                   (0x1d99)
#define MT6377_RG_LDO_VSIM2_EN_ADDR                 (0x1da4)
#define MT6377_RG_LDO_VSIM2_EN_SHIFT                (0)
#define MT6377_RG_LDO_VSIM2_LP_ADDR                 (0x1da4)
#define MT6377_RG_LDO_VSIM2_LP_SHIFT                (1)
#define MT6377_DA_VSIM2_B_LP_ADDR                   (0x1da8)
#define MT6377_RG_LDO_VUSB_EN_ADDR                  (0x1db3)
#define MT6377_RG_LDO_VUSB_EN_SHIFT                 (0)
#define MT6377_RG_LDO_VUSB_LP_ADDR                  (0x1db3)
#define MT6377_RG_LDO_VUSB_LP_SHIFT                 (1)
#define MT6377_DA_VUSB_B_LP_ADDR                    (0x1db7)
#define MT6377_RG_LDO_VIBR_EN_ADDR                  (0x1dc1)
#define MT6377_RG_LDO_VIBR_EN_SHIFT                 (0)
#define MT6377_RG_LDO_VIBR_LP_ADDR                  (0x1dc1)
#define MT6377_RG_LDO_VIBR_LP_SHIFT                 (1)
#define MT6377_DA_VIBR_B_LP_ADDR                    (0x1dc5)
#define MT6377_RG_LDO_VIO28_EN_ADDR                 (0x1dcf)
#define MT6377_RG_LDO_VIO28_EN_SHIFT                (0)
#define MT6377_RG_LDO_VIO28_LP_ADDR                 (0x1dcf)
#define MT6377_RG_LDO_VIO28_LP_SHIFT                (1)
#define MT6377_DA_VIO28_B_LP_ADDR                   (0x1dd3)
#define MT6377_RG_LDO_VFP_EN_ADDR                   (0x1e07)
#define MT6377_RG_LDO_VFP_EN_SHIFT                  (0)
#define MT6377_RG_LDO_VFP_LP_ADDR                   (0x1e07)
#define MT6377_RG_LDO_VFP_LP_SHIFT                  (1)
#define MT6377_DA_VFP_B_LP_ADDR                     (0x1e0b)
#define MT6377_RG_LDO_VTP_EN_ADDR                   (0x1e15)
#define MT6377_RG_LDO_VTP_EN_SHIFT                  (0)
#define MT6377_RG_LDO_VTP_LP_ADDR                   (0x1e15)
#define MT6377_RG_LDO_VTP_LP_SHIFT                  (1)
#define MT6377_DA_VTP_B_LP_ADDR                     (0x1e19)
#define MT6377_RG_LDO_VSRAM_MD_EN_ADDR              (0x1e87)
#define MT6377_RG_LDO_VSRAM_MD_EN_SHIFT             (0)
#define MT6377_RG_LDO_VSRAM_MD_LP_ADDR              (0x1e87)
#define MT6377_RG_LDO_VSRAM_MD_LP_SHIFT             (1)
#define MT6377_DA_VSRAM_MD_B_LP_ADDR                (0x1e8b)
#define MT6377_LDO_VSRAM_MD_WDTDBG_VOSEL_ADDR       (0x1e8e)
#define MT6377_RG_LDO_VSRAM_PROC1_EN_ADDR           (0x1e9d)
#define MT6377_RG_LDO_VSRAM_PROC1_EN_SHIFT          (0)
#define MT6377_RG_LDO_VSRAM_PROC1_LP_ADDR           (0x1e9d)
#define MT6377_RG_LDO_VSRAM_PROC1_LP_SHIFT          (1)
#define MT6377_DA_VSRAM_PROC1_B_LP_ADDR             (0x1ea1)
#define MT6377_LDO_VSRAM_PROC1_WDTDBG_VOSEL_ADDR    (0x1ea4)
#define MT6377_RG_LDO_VSRAM_PROC2_EN_ADDR           (0x1f07)
#define MT6377_RG_LDO_VSRAM_PROC2_EN_SHIFT          (0)
#define MT6377_RG_LDO_VSRAM_PROC2_LP_ADDR           (0x1f07)
#define MT6377_RG_LDO_VSRAM_PROC2_LP_SHIFT          (1)
#define MT6377_DA_VSRAM_PROC2_B_LP_ADDR             (0x1f0b)
#define MT6377_LDO_VSRAM_PROC2_WDTDBG_VOSEL_ADDR    (0x1f0e)
#define MT6377_RG_LDO_VSRAM_OTHERS_EN_ADDR          (0x1f1d)
#define MT6377_RG_LDO_VSRAM_OTHERS_EN_SHIFT         (0)
#define MT6377_RG_LDO_VSRAM_OTHERS_LP_ADDR          (0x1f1d)
#define MT6377_RG_LDO_VSRAM_OTHERS_LP_SHIFT         (1)
#define MT6377_DA_VSRAM_OTHERS_B_LP_ADDR            (0x1f21)
#define MT6377_LDO_VSRAM_OTHERS_WDTDBG_VOSEL_ADDR   (0x1f24)
#define MT6377_LDO_VA12_OP_EN0                      (0x1b8c)
#define MT6377_LDO_VAUD18_OP_EN0                    (0x1b9a)
#define MT6377_LDO_VAUD28_OP_EN0                    (0x1ba8)
#define MT6377_LDO_VAUX18_OP_EN0                    (0x1bb6)
#define MT6377_LDO_VBIF28_OP_EN0                    (0x1bc4)
#define MT6377_LDO_VCN33_1_OP_EN0                   (0x1bd2)
#define MT6377_LDO_VCN33_2_OP_EN0                   (0x1c0c)
#define MT6377_LDO_VCN18_OP_EN0                     (0x1c1a)
#define MT6377_LDO_VRFCK_OP_EN0                     (0x1c28)
#define MT6377_LDO_VBBCK_OP_EN0                     (0x1c36)
#define MT6377_LDO_VXO22_OP_EN0                     (0x1c44)
#define MT6377_LDO_VM18_OP_EN0                      (0x1c52)
#define MT6377_LDO_VEFUSE_OP_EN0                    (0x1ca8)
#define MT6377_LDO_VEMC_OP_EN0                      (0x1cb6)
#define MT6377_LDO_VUFS_OP_EN0                      (0x1cc4)
#define MT6377_LDO_VIO18_OP_EN0                     (0x1cd2)
#define MT6377_LDO_VRF18_OP_EN0                     (0x1d0c)
#define MT6377_LDO_VRF12_OP_EN0                     (0x1d1a)
#define MT6377_LDO_VRF09_OP_EN0                     (0x1d28)
#define MT6377_LDO_VRFVA12_OP_EN0                   (0x1d36)
#define MT6377_LDO_VRFIO18_OP_EN0                   (0x1d44)
#define MT6377_LDO_VMCH_OP_EN0                      (0x1d52)
#define MT6377_LDO_VMC_OP_EN0                       (0x1d8c)
#define MT6377_LDO_VSIM1_OP_EN0                     (0x1d9a)
#define MT6377_LDO_VSIM2_OP_EN0                     (0x1da9)
#define MT6377_LDO_VUSB_OP_EN0                      (0x1db8)
#define MT6377_LDO_VIBR_OP_EN0                      (0x1dc6)
#define MT6377_LDO_VIO28_OP_EN0                     (0x1dd4)
#define MT6377_LDO_VFP_OP_EN0                       (0x1e0c)
#define MT6377_LDO_VTP_OP_EN0                       (0x1e1a)
#define MT6377_RG_VAUD28_VOCAL_ADDR                 (0x1f88)
#define MT6377_RG_VAUD28_VOCAL_MASK                 (0xf)
#define MT6377_RG_VAUD28_VOSEL_ADDR                 (0x1f89)
#define MT6377_RG_VAUD28_VOSEL_MASK                 (0xf)
#define MT6377_RG_VAUX18_VOCAL_ADDR                 (0x1f8b)
#define MT6377_RG_VAUX18_VOCAL_MASK                 (0xf)
#define MT6377_RG_VAUX18_VOSEL_ADDR                 (0x1f8c)
#define MT6377_RG_VAUX18_VOSEL_MASK                 (0xf)
#define MT6377_RG_VBIF28_VOCAL_ADDR                 (0x1f91)
#define MT6377_RG_VBIF28_VOCAL_MASK                 (0xf)
#define MT6377_RG_VBIF28_VOSEL_ADDR                 (0x1f92)
#define MT6377_RG_VBIF28_VOSEL_MASK                 (0xf)
#define MT6377_RG_VCN33_1_VOCAL_ADDR                (0x1f94)
#define MT6377_RG_VCN33_1_VOCAL_MASK                (0xf)
#define MT6377_RG_VCN33_1_VOSEL_ADDR                (0x1f95)
#define MT6377_RG_VCN33_1_VOSEL_MASK                (0xf)
#define MT6377_RG_VCN33_2_VOCAL_ADDR                (0x1f98)
#define MT6377_RG_VCN33_2_VOCAL_MASK                (0xf)
#define MT6377_RG_VCN33_2_VOSEL_ADDR                (0x1f99)
#define MT6377_RG_VCN33_2_VOSEL_MASK                (0xf)
#define MT6377_RG_VSIM1_VOCAL_ADDR                  (0x1f9e)
#define MT6377_RG_VSIM1_VOCAL_MASK                  (0xf)
#define MT6377_RG_VSIM1_VOSEL_ADDR                  (0x1f9f)
#define MT6377_RG_VSIM1_VOSEL_MASK                  (0xf)
#define MT6377_RG_VSIM2_VOCAL_ADDR                  (0x1fa1)
#define MT6377_RG_VSIM2_VOCAL_MASK                  (0xf)
#define MT6377_RG_VSIM2_VOSEL_ADDR                  (0x1fa2)
#define MT6377_RG_VSIM2_VOSEL_MASK                  (0xf)
#define MT6377_RG_VIO28_VOCAL_ADDR                  (0x1fa4)
#define MT6377_RG_VIO28_VOCAL_MASK                  (0xf)
#define MT6377_RG_VIO28_VOSEL_ADDR                  (0x1fa5)
#define MT6377_RG_VIO28_VOSEL_MASK                  (0xf)
#define MT6377_RG_VIBR_VOCAL_ADDR                   (0x1fa8)
#define MT6377_RG_VIBR_VOCAL_MASK                   (0xf)
#define MT6377_RG_VIBR_VOSEL_ADDR                   (0x1fa9)
#define MT6377_RG_VIBR_VOSEL_MASK                   (0xf)
#define MT6377_RG_VMCH_VOCAL_ADDR                   (0x1fad)
#define MT6377_RG_VMCH_VOCAL_MASK                   (0xf)
#define MT6377_RG_VMCH_VOSEL_ADDR                   (0x1fae)
#define MT6377_RG_VMCH_VOSEL_MASK                   (0xf)
#define MT6377_RG_VMC_VOCAL_ADDR                    (0x1fb1)
#define MT6377_RG_VMC_VOCAL_MASK                    (0xf)
#define MT6377_RG_VMC_VOSEL_ADDR                    (0x1fb2)
#define MT6377_RG_VMC_VOSEL_MASK                    (0xf)
#define MT6377_RG_VFP_VOCAL_ADDR                    (0x1fb4)
#define MT6377_RG_VFP_VOCAL_MASK                    (0xf)
#define MT6377_RG_VFP_VOSEL_ADDR                    (0x1fb5)
#define MT6377_RG_VFP_VOSEL_MASK                    (0xf)
#define MT6377_RG_VTP_VOCAL_ADDR                    (0x1fb8)
#define MT6377_RG_VTP_VOCAL_MASK                    (0xf)
#define MT6377_RG_VTP_VOSEL_ADDR                    (0x1fb9)
#define MT6377_RG_VTP_VOSEL_MASK                    (0xf)
#define MT6377_RG_VRF18_VOCAL_ADDR                  (0x2008)
#define MT6377_RG_VRF18_VOCAL_MASK                  (0xf)
#define MT6377_RG_VRF18_VOSEL_ADDR                  (0x2009)
#define MT6377_RG_VRF18_VOSEL_MASK                  (0xf)
#define MT6377_RG_VEFUSE_VOCAL_ADDR                 (0x200b)
#define MT6377_RG_VEFUSE_VOCAL_MASK                 (0xf)
#define MT6377_RG_VEFUSE_VOSEL_ADDR                 (0x200c)
#define MT6377_RG_VEFUSE_VOSEL_MASK                 (0xf)
#define MT6377_RG_VCN18_VOCAL_ADDR                  (0x200e)
#define MT6377_RG_VCN18_VOCAL_MASK                  (0xf)
#define MT6377_RG_VCN18_VOSEL_ADDR                  (0x200f)
#define MT6377_RG_VCN18_VOSEL_MASK                  (0xf)
#define MT6377_RG_VRFIO18_VOCAL_ADDR                (0x2011)
#define MT6377_RG_VRFIO18_VOCAL_MASK                (0xf)
#define MT6377_RG_VRFIO18_VOSEL_ADDR                (0x2012)
#define MT6377_RG_VRFIO18_VOSEL_MASK                (0xf)
#define MT6377_RG_VAUD18_VOCAL_ADDR                 (0x2014)
#define MT6377_RG_VAUD18_VOCAL_MASK                 (0xf)
#define MT6377_RG_VAUD18_VOSEL_ADDR                 (0x2015)
#define MT6377_RG_VAUD18_VOSEL_MASK                 (0xf)
#define MT6377_RG_VIO18_VOCAL_ADDR                  (0x2017)
#define MT6377_RG_VIO18_VOCAL_MASK                  (0xf)
#define MT6377_RG_VIO18_VOSEL_ADDR                  (0x2018)
#define MT6377_RG_VIO18_VOSEL_MASK                  (0xf)
#define MT6377_RG_VM18_VOCAL_ADDR                   (0x201a)
#define MT6377_RG_VM18_VOCAL_MASK                   (0xf)
#define MT6377_RG_VM18_VOSEL_ADDR                   (0x201b)
#define MT6377_RG_VM18_VOSEL_MASK                   (0xf)
#define MT6377_RG_VUFS_VOCAL_ADDR                   (0x201d)
#define MT6377_RG_VUFS_VOCAL_MASK                   (0xf)
#define MT6377_RG_VUFS_VOSEL_ADDR                   (0x201e)
#define MT6377_RG_VUFS_VOSEL_MASK                   (0xf)
#define MT6377_RG_VRF12_VOCAL_ADDR                  (0x202a)
#define MT6377_RG_VRF12_VOCAL_MASK                  (0xf)
#define MT6377_RG_VRF12_VOSEL_ADDR                  (0x202b)
#define MT6377_RG_VRF12_VOSEL_MASK                  (0xf)
#define MT6377_RG_VRF09_VOCAL_ADDR                  (0x202e)
#define MT6377_RG_VRF09_VOCAL_MASK                  (0xf)
#define MT6377_RG_VRF09_VOSEL_ADDR                  (0x202f)
#define MT6377_RG_VRF09_VOSEL_MASK                  (0xf)
#define MT6377_RG_VRFVA12_VOCAL_ADDR                (0x2033)
#define MT6377_RG_VRFVA12_VOCAL_MASK                (0xf)
#define MT6377_RG_VRFVA12_VOSEL_ADDR                (0x2034)
#define MT6377_RG_VRFVA12_VOSEL_MASK                (0xf)
#define MT6377_RG_VA12_VOCAL_ADDR                   (0x2051)
#define MT6377_RG_VA12_VOCAL_MASK                   (0xf0)
#define MT6377_RG_VA12_VOSEL_ADDR                   (0x2052)
#define MT6377_RG_VA12_VOSEL_MASK                   (0xf)
#define MT6377_RG_VXO22_VOCAL_ADDR                  (0x2088)
#define MT6377_RG_VXO22_VOCAL_MASK                  (0xf)
#define MT6377_RG_VXO22_VOSEL_ADDR                  (0x2088)
#define MT6377_RG_VXO22_VOSEL_MASK                  (0xf0)
#define MT6377_RG_VRFCK_VOCAL_ADDR                  (0x208a)
#define MT6377_RG_VRFCK_VOCAL_MASK                  (0xf)
#define MT6377_RG_VBBCK_VOCAL_ADDR                  (0)
#define MT6377_RG_VBBCK_VOCAL_MASK                  (0)
#define MT6377_RG_VRFCK_VOSEL_ADDR                  (0x208b)
#define MT6377_RG_VRFCK_VOSEL_MASK                  (0xf)
#define MT6377_RG_VBBCK_VOSEL_ADDR                  (0x2092)
#define MT6377_RG_VBBCK_VOSEL_MASK                  (0xf)
#define MT6377_RG_BUCK_VBUCK3_SSHUB_EN_ADDR         (0x159b)
#define MT6377_RG_BUCK_VBUCK4_SSHUB_EN_ADDR         (0x161b)
#define MT6377_RG_LDO_VSRAM_OTHERS_SSHUB_EN_ADDR    (0x1f33)
#define MT6377_RG_BUCK_VBUCK3_SSHUB_VOSEL_ADDR      (0x159c)
#define MT6377_RG_BUCK_VBUCK3_SSHUB_VOSEL_MASK      (0xff)
#define MT6377_RG_BUCK_VBUCK4_SSHUB_VOSEL_ADDR      (0x161c)
#define MT6377_RG_BUCK_VBUCK4_SSHUB_VOSEL_MASK      (0xff)
#define MT6377_RG_LDO_VSRAM_OTHERS_SSHUB_VOSEL_ADDR (0x1f33)
#define MT6377_RG_LDO_VSRAM_OTHERS_SSHUB_VOSEL_MASK (0xfe)

#define MT6377_LDO_VMCH_EINT                        (0x1d5b)
#define MT6377_PMIC_RG_LDO_VMCH_EINT_EN_MASK        (0x1)
#define MT6377_PMIC_RG_LDO_VMCH_EINT_POL_MASK       (0x4)
#define MT6377_PMIC_RG_LDO_VMCH_EINT_DB_MASK        (0x10)
#define MT6377_ISINK_EN_CTRL0                       (0x220b)
#define MT6377_ISINK_EN_CTRL1                       (0x220c)


#endif /* __LINUX_REGULATOR_MT6377_H */