#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x230 - 0x228)
// BlueprintGeneratedClass Action_SG_JAK_Magic_Reload_Quick.Action_SG_JAK_Magic_Reload_Quick_C
class UAction_SG_JAK_Magic_Reload_Quick_C : public UAction_Weapon_Reload_Master_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_SG_JAK_Magic_Reload_Quick_C* GetDefaultObj();

	void Action_WeaponReloadSprinkle();
	void ExecuteUbergraph_Action_SG_JAK_Magic_Reload_Quick(int32 EntryPoint, class AWeapon* CallFunc_K2_GetWeapon_ReturnValue);
};

}

