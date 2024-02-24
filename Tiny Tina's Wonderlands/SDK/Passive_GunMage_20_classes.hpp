#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x248 - 0x200)
// BlueprintGeneratedClass Passive_GunMage_20.Passive_GunMage_20_C
class UPassive_GunMage_20_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_GunMage_20; // 0x208(0x28)(None)
	struct FDataTableValueHandle                 Scalar;                                            // 0x230(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UPassive_GunMage_20_C* GetDefaultObj();

	void OnActivated();
	void GunMagePassive20_OnStackGained();
	void ExecuteUbergraph_Passive_GunMage_20(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFeat_GunMage_C* K2Node_DynamicCast_AsFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, float CallFunc_GetMaxShield_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


