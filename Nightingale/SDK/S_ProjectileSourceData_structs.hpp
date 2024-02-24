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

// 0x131 (0x131 - 0x0)
// UserDefinedStruct S_ProjectileSourceData.S_ProjectileSourceData
struct FS_ProjectileSourceData
{
public:
	class APawn*                                 Instigator_44_234926074C3ED4538D5B4CB62EC1D4A6;    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	float                                        ProjectileDamage_35_6F7B2C90499376C84C4B638F2A609613; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                IntendedTarget_13_54DA2B024140E3AE93E426BE8FCA315F; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartingLocation_16_66CBF80D4244E165D95B7B9045BAF872; // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult_10_07145E184BF260971772F59A08D06C08;     // 0x30(0xE8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class UClass*>                        ImpactGameplayEffects_33_EE4A24C44F6D83130C809FA018C08ACD; // 0x118(0x10)(Edit, BlueprintVisible)
	class ABP_ProjectileBase_C*                  Projectile_41_05AD0AFC4679EFB4DB1AC0A6EE9A47B3;    // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAsync_46_C8F70A454E6340BBC8901ABAAF12239B;       // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


