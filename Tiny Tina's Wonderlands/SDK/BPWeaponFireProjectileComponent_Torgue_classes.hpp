#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x980 - 0x958)
// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C
class UBPWeaponFireProjectileComponent_Torgue_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(Transient, DuplicateTransient)
	class UClass*                                Gyro_Normal;                                       // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Gyro_Stick;                                        // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Grenade_Normal;                                    // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Grenade_Sticky;                                    // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPWeaponFireProjectileComponent_Torgue_C* GetDefaultObj();

	class UClass* SelectProjectile(int32 ProjectileType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void K2_OnActivated();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue(int32 EntryPoint, class UClass* CallFunc_SelectProjectile_ReturnValue);
};

}


