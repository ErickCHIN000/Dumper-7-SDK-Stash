#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x149 - 0x110)
// BlueprintGeneratedClass Ability_Quadbow_Modeswitch.Ability_Quadbow_Modeswitch_C
class UAbility_Quadbow_Modeswitch_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Quadbow_Modeswitch; // 0x118(0x28)(None)
	class ABPChar_Player_C*                      Player;                                            // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AmmoRefilled;                                      // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Quadbow_Modeswitch_C* GetDefaultObj();

	void SwitchedWeaponMode();
	void OnActivated();
	void OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void ExecuteUbergraph_Ability_Quadbow_Modeswitch(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bAutoReload, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate);
};

}


