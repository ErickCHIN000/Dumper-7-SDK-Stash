#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Crafting_Step_Test_Activate.GA_Crafting_Step_Test_Activate_C
// (None)

class UClass* UGA_Crafting_Step_Test_Activate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Crafting_Step_Test_Activate_C");

	return Clss;
}


// GA_Crafting_Step_Test_Activate_C GA_Crafting_Step_Test_Activate.Default__GA_Crafting_Step_Test_Activate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Crafting_Step_Test_Activate_C* UGA_Crafting_Step_Test_Activate_C::GetDefaultObj()
{
	static class UGA_Crafting_Step_Test_Activate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Crafting_Step_Test_Activate_C*>(UGA_Crafting_Step_Test_Activate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Crafting_Step_Test_Activate.GA_Crafting_Step_Test_Activate_C.OnPostActivation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnPostActivation_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingStep_ReturnValue           (None)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// TScriptInterface<class IInteractionInterface>K2Node_DynamicCast_AsInteraction_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Test_Activate_C::OnPostActivation(bool* Success, bool CallFunc_OnPostActivation_Success, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, TScriptInterface<class IInteractionInterface> K2Node_DynamicCast_AsInteraction_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Test_Activate_C", "OnPostActivation");

	Params::UGA_Crafting_Step_Test_Activate_C_OnPostActivation_Params Parms{};

	Parms.CallFunc_OnPostActivation_Success = CallFunc_OnPostActivation_Success;
	Parms.CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue = CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_DynamicCast_AsInteraction_Interface = K2Node_DynamicCast_AsInteraction_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Test_Activate.GA_Crafting_Step_Test_Activate_C.GenerateStepData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicTypedStructs        CurrentData                                                      (Edit, BlueprintVisible)

void UGA_Crafting_Step_Test_Activate_C::GenerateStepData(bool* Success, const struct FDynamicTypedStructs& CurrentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Test_Activate_C", "GenerateStepData");

	Params::UGA_Crafting_Step_Test_Activate_C_GenerateStepData_Params Parms{};

	Parms.CurrentData = CurrentData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Test_Activate.GA_Crafting_Step_Test_Activate_C.InitializeAbilityFromEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InitializeSuccess                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeAbilityFromEvent_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_Test       CallFunc_GetStructByType_OutStruct                               (HasGetValueTypeHash)
// bool                               CallFunc_GetStructByType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Test_Activate_C::InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, bool InitializeSuccess, bool CallFunc_InitializeAbilityFromEvent_Success, const struct FS_Crafting_Step_Test& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, const struct FS_Crafting_Step_Definition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Test_Activate_C", "InitializeAbilityFromEvent");

	Params::UGA_Crafting_Step_Test_Activate_C_InitializeAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;
	Parms.InitializeSuccess = InitializeSuccess;
	Parms.CallFunc_InitializeAbilityFromEvent_Success = CallFunc_InitializeAbilityFromEvent_Success;
	Parms.CallFunc_GetStructByType_OutStruct = CallFunc_GetStructByType_OutStruct;
	Parms.CallFunc_GetStructByType_ReturnValue = CallFunc_GetStructByType_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


