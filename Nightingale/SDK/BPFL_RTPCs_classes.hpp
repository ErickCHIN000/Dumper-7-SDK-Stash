#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_RTPCs.BPFL_RTPCs_C
class UBPFL_RTPCs_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_RTPCs_C* GetDefaultObj();

	void Get_Puddle_Value(class UPhysicalMaterial* Material, class UAkSwitchValue* Surface_Switch, class UObject* __WorldContext, double* Puddle_Value, double Puddle, const TArray<class UAkSwitchValue*>& Puddle_Switches, TArray<class UAkSwitchValue*>& K2Node_MakeArray_Array, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, float CallFunc_GetFloatParameter_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_TryGetPuddleOverride_PuddleOverrideOut, bool CallFunc_TryGetPuddleOverride_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double K2Node_VariableSet_Puddle_ImplicitCast, double K2Node_VariableSet_Puddle_ImplicitCast_1);
};

}


