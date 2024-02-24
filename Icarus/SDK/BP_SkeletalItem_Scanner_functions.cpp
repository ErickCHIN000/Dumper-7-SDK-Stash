#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C
// (Actor)

class UClass* ABP_SkeletalItem_Scanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Scanner_C");

	return Clss;
}


// BP_SkeletalItem_Scanner_C BP_SkeletalItem_Scanner.Default__BP_SkeletalItem_Scanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Scanner_C* ABP_SkeletalItem_Scanner_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Scanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Scanner_C*>(ABP_SkeletalItem_Scanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.IsScannerActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_SkeletalItem_Scanner_C::IsScannerActive(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "IsScannerActive");

	Params::ABP_SkeletalItem_Scanner_C_IsScannerActive_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.PlayAudioBeep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Scanner_C::PlayAudioBeep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "PlayAudioBeep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.GetScreenWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidgetComponent* ABP_SkeletalItem_Scanner_C::GetScreenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "GetScreenWidget");

	Params::ABP_SkeletalItem_Scanner_C_GetScreenWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.UpdateLightMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Scanner_C::UpdateLightMaterial(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "UpdateLightMaterial");

	Params::ABP_SkeletalItem_Scanner_C_UpdateLightMaterial_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.Blinker__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Scanner_C::Blinker__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "Blinker__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.Blinker__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Scanner_C::Blinker__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "Blinker__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.Blinker__Audio__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Scanner_C::Blinker__Audio__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "Blinker__Audio__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Scanner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Scanner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "ReceiveTick");

	Params::ABP_SkeletalItem_Scanner_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.ViewModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsThirdPerson                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Scanner_C::ViewModeChanged(bool bIsThirdPerson)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "ViewModeChanged");

	Params::ABP_SkeletalItem_Scanner_C_ViewModeChanged_Params Parms{};

	Parms.bIsThirdPerson = bIsThirdPerson;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C.ExecuteUbergraph_BP_SkeletalItem_Scanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTraitBehaviour*>     CallFunc_GetBehaviours_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTraitBehaviour*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Scanner_C*K2Node_DynamicCast_AsBP_Actionable_Behaviour_Scanner             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*            CallFunc_GetScreenWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_CaveScannerScreen_C*      K2Node_DynamicCast_AsW_Cave_Scanner_Screen                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsScannerActive_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsThirdPerson                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*            CallFunc_GetScreenWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Scanner_C::ExecuteUbergraph_BP_SkeletalItem_Scanner(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, TArray<class UTraitBehaviour*>& CallFunc_GetBehaviours_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTraitBehaviour* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UBP_ActionableBehaviour_Scanner_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Scanner, bool K2Node_DynamicCast_bSuccess_1, class UWidgetComponent* CallFunc_GetScreenWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_CaveScannerScreen_C* K2Node_DynamicCast_AsW_Cave_Scanner_Screen, bool K2Node_DynamicCast_bSuccess_2, float K2Node_Event_DeltaSeconds, bool CallFunc_IsScannerActive_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_CustomEvent_bIsThirdPerson, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, class UWidgetComponent* CallFunc_GetScreenWidget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Scanner_C", "ExecuteUbergraph_BP_SkeletalItem_Scanner");

	Params::ABP_SkeletalItem_Scanner_C_ExecuteUbergraph_BP_SkeletalItem_Scanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetBehaviours_ReturnValue = CallFunc_GetBehaviours_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Behaviour_Scanner = K2Node_DynamicCast_AsBP_Actionable_Behaviour_Scanner;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetScreenWidget_ReturnValue = CallFunc_GetScreenWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Cave_Scanner_Screen = K2Node_DynamicCast_AsW_Cave_Scanner_Screen;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsScannerActive_ReturnValue = CallFunc_IsScannerActive_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_bIsThirdPerson = K2Node_CustomEvent_bIsThirdPerson;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_GetScreenWidget_ReturnValue_1 = CallFunc_GetScreenWidget_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


