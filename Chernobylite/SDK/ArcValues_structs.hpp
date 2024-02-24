#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x91 - 0x0)
// UserDefinedStruct ArcValues.ArcValues
struct FArcValues
{
public:
	float                                        Distance_2_ACC208F943B91F02287B44B766583E6C;       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BoltColor_19_D167C5764AF0E55FCD7775ABB9B42E4F;     // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBranch_20_AD4AD56A43A1822383691188E7F28F87;      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AllowBranches_21_796E8746432EEE92FDE8CE92B623C622; // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C57[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BranchLimit_22_E0DAD7B74D89BBD5AEC2CF83E7FF52F0;   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PriorHitLoc_23_9F2D75A74AC03AF87ADEC38586F0FBA9;   // 0x1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PriorHitNormal_24_92C51D08413FD6E9858F95ABAF828EDD; // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate_18_31112E0F4CF21A72A1AC24811690B9A9;      // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CustomVectors_33_EBBACDBA493B2D25F0D03C8BBE888003; // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C76[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin_34_53FA37844CDD6574B3CE8EAD885FD9EB;        // 0x3C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Dest_30_33CF72E24E121348F3ACC6BE4EF285E6;          // 0x48(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NoiseScale_35_20F48BE340BC3174E082729E7D6B97DC;    // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NoiseSpeed_36_D5EC2DCE4500D0CD5268FE96135DD1C2;    // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LifetimeMin_41_DD82403B40971842AF6EF5AA76C2F256;   // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LifetimeMax_42_89E7E98D4451C20A214A04A8FC9CCDB2;   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnablePointLights_48_F29566C642B88A081D60E1878E5296C1; // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bPointLightShadows_47_8E7E46054064CD97C9265B9FD8F96AD5; // 0x65(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C9C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LightAttenuationRadius_51_A868EFED42BCBEAD7CB80788316AC048; // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightVolumetricScattering_71_21DBAC4C467F099DE20F52B5A3C33CE7; // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArcRiseOffset_58_5FF5206A41A3B7E9CE34EAB3798D3AF6; // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightIntensity_60_3BDE39384BF1E6237607B8BA65D2BD46; // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArcSize                          LightningType_63_04DD85194C4E0D066803DDB3B4B054F2; // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CAB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArcMinimalDistance_66_A45E40ED4DF8A03C13746C8D5BC91639; // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomLightningHitParticles_73_21DA405F488B86EE2CF8F387280D8C0E; // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CustomLightningHitParticles_76_C0F072E9483C0ABDE30FAABE6DE3417C; // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnLightAtOrigin_78_7508AF2E42E50AC036760CA4729105EB; // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


