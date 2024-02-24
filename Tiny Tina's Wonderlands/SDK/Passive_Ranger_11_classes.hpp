#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x210 - 0x200)
// BlueprintGeneratedClass Passive_Ranger_11.Passive_Ranger_11_C
class UPassive_Ranger_11_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(Transient, DuplicateTransient)
	class UGbxAbility*                           RangerFeat;                                        // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPassive_Ranger_11_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Passive_Ranger_11(int32 EntryPoint, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetMushroomCompanion_Ref, bool CallFunc_GetMushroomCompanion_Res, TScriptInterface<class IIBPChar_MushroomCompanion_C> K2Node_DynamicCast_AsIBPChar_Mushroom_Companion, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Passive_Ranger_11_Set_Enabled_Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess2, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger1, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_GetMushroomCompanion_Ref1, bool CallFunc_GetMushroomCompanion_Res1, TScriptInterface<class IIBPChar_MushroomCompanion_C> K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_Passive_Ranger_11_Set_Enabled_Res1);
};

}


