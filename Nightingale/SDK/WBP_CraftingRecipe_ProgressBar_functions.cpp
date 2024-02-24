#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C
// (None)

class UClass* UWBP_CraftingRecipe_ProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CraftingRecipe_ProgressBar_C");

	return Clss;
}


// WBP_CraftingRecipe_ProgressBar_C WBP_CraftingRecipe_ProgressBar.Default__WBP_CraftingRecipe_ProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CraftingRecipe_ProgressBar_C* UWBP_CraftingRecipe_ProgressBar_C::GetDefaultObj()
{
	static class UWBP_CraftingRecipe_ProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CraftingRecipe_ProgressBar_C*>(UWBP_CraftingRecipe_ProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C.IsCraftInProgressEqualToCurrentRecipe
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsEqual                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FCraftingRecipeReference_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingRecipe_ProgressBar_C::IsCraftInProgressEqualToCurrentRecipe(bool* IsEqual, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_FCraftingRecipeReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingRecipe_ProgressBar_C", "IsCraftInProgressEqualToCurrentRecipe");

	Params::UWBP_CraftingRecipe_ProgressBar_C_IsCraftInProgressEqualToCurrentRecipe_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_FCraftingRecipeReference_ReturnValue = CallFunc_EqualEqual_FCraftingRecipeReference_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEqual != nullptr)
		*IsEqual = Parms.IsEqual;

}


// Function WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C.TimerUpdate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmTimerComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealTimeElapsedSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingRecipe_ProgressBar_C::TimerUpdate(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingRecipe_ProgressBar_C", "TimerUpdate");

	Params::UWBP_CraftingRecipe_ProgressBar_C_TimerUpdate_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRealTimeElapsedSeconds_ReturnValue = CallFunc_GetRealTimeElapsedSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C.UpdateProgressBar
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BaseTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LTotalTimeRequired                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress LCraftInProgress                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_B_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingRecipe_ProgressBar_C::UpdateProgressBar(double BaseTime, double LTotalTimeRequired, const struct FS_Crafting_CraftInProgress& LCraftInProgress, bool CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SafeDivide_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingRecipe_ProgressBar_C", "UpdateProgressBar");

	Params::UWBP_CraftingRecipe_ProgressBar_C_UpdateProgressBar_Params Parms{};

	Parms.BaseTime = BaseTime;
	Parms.LTotalTimeRequired = LTotalTimeRequired;
	Parms.LCraftInProgress = LCraftInProgress;
	Parms.CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual = CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SafeDivide_B_ImplicitCast = CallFunc_SafeDivide_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C.OnDataUpdated
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_RefinementTimerCallFunc_GetStructByType_OutStruct                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructByType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentCraftData_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCurrentCraftData_ReturnValue                         (HasGetValueTypeHash)

void UWBP_CraftingRecipe_ProgressBar_C::OnDataUpdated(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingRecipe_ProgressBar_C", "OnDataUpdated");

	Params::UWBP_CraftingRecipe_ProgressBar_C_OnDataUpdated_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetStructByType_OutStruct = CallFunc_GetStructByType_OutStruct;
	Parms.CallFunc_GetStructByType_ReturnValue = CallFunc_GetStructByType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentCraftData_Success = CallFunc_GetCurrentCraftData_Success;
	Parms.CallFunc_GetCurrentCraftData_ReturnValue = CallFunc_GetCurrentCraftData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C.UpdateRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingRecipe_ProgressBar_C::UpdateRecipe(const struct FCraftingRecipeReference& Recipe, bool CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingRecipe_ProgressBar_C", "UpdateRecipe");

	Params::UWBP_CraftingRecipe_ProgressBar_C_UpdateRecipe_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual = CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CraftingRecipe_ProgressBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingRecipe_ProgressBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingRecipe_ProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingRecipe_ProgressBar_C", "Tick");

	Params::UWBP_CraftingRecipe_ProgressBar_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CraftingRecipe_ProgressBar_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingRecipe_ProgressBar_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingRecipe_ProgressBar.WBP_CraftingRecipe_ProgressBar_C.ExecuteUbergraph_WBP_CraftingRecipe_ProgressBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IControllerInteractionInterface>CallFunc_GetLastInteractedActor_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLastInteractedActor_ReturnValue                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingRecipe_ProgressBar_C::ExecuteUbergraph_WBP_CraftingRecipe_ProgressBar(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual, bool CallFunc_Not_PreBool_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingRecipe_ProgressBar_C", "ExecuteUbergraph_WBP_CraftingRecipe_ProgressBar");

	Params::UWBP_CraftingRecipe_ProgressBar_C_ExecuteUbergraph_WBP_CraftingRecipe_ProgressBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual = CallFunc_IsCraftInProgressEqualToCurrentRecipe_IsEqual;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetLastInteractedActor_self_CastInput = CallFunc_GetLastInteractedActor_self_CastInput;
	Parms.CallFunc_GetLastInteractedActor_ReturnValue = CallFunc_GetLastInteractedActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


