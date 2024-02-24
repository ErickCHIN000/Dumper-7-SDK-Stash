#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIProjectionComponent.BP_UIProjectionComponent_C
// (None)

class UClass* UBP_UIProjectionComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIProjectionComponent_C");

	return Clss;
}


// BP_UIProjectionComponent_C BP_UIProjectionComponent.Default__BP_UIProjectionComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIProjectionComponent_C* UBP_UIProjectionComponent_C::GetDefaultObj()
{
	static class UBP_UIProjectionComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIProjectionComponent_C*>(UBP_UIProjectionComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.SetTargetComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             TargetComponentOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIProjectionComponent_C::SetTargetComponent(class USceneComponent* TargetComponentOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "SetTargetComponent");

	Params::UBP_UIProjectionComponent_C_SetTargetComponent_Params Parms{};

	Parms.TargetComponentOverride = TargetComponentOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.ForceUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ProjectionInterface_C*    CallFunc_GetProjectionInterface_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIProjectionComponent_C::ForceUpdate(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UW_ProjectionInterface_C* CallFunc_GetProjectionInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "ForceUpdate");

	Params::UBP_UIProjectionComponent_C_ForceUpdate_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_GetProjectionInterface_ReturnValue = CallFunc_GetProjectionInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.OnRep_NearbyDistanceStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIProjectionComponent_C::OnRep_NearbyDistanceStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "OnRep_NearbyDistanceStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.OnRep_NearbyDistanceEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIProjectionComponent_C::OnRep_NearbyDistanceEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "OnRep_NearbyDistanceEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.RegisterWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ProjectionInterface_C*    CallFunc_GetProjectionInterface_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIProjectionComponent_C::RegisterWidget(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UW_ProjectionInterface_C* CallFunc_GetProjectionInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "RegisterWidget");

	Params::UBP_UIProjectionComponent_C_RegisterWidget_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_GetProjectionInterface_ReturnValue = CallFunc_GetProjectionInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.GetWidgetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_UIProjectionLocation_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIProjectionComponent_C::GetWidgetLocation(struct FVector* Location, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_UIProjectionLocation_C* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "GetWidgetLocation");

	Params::UBP_UIProjectionComponent_C_GetWidgetLocation_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.OnLoaded_D09A340442841CEDB6A7A58D706E1269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_UIProjectionComponent_C::OnLoaded_D09A340442841CEDB6A7A58D706E1269(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "OnLoaded_D09A340442841CEDB6A7A58D706E1269");

	Params::UBP_UIProjectionComponent_C_OnLoaded_D09A340442841CEDB6A7A58D706E1269_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.OnLoaded_085089B14AC10467FBC409BEB05D5F01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_UIProjectionComponent_C::OnLoaded_085089B14AC10467FBC409BEB05D5F01(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "OnLoaded_085089B14AC10467FBC409BEB05D5F01");

	Params::UBP_UIProjectionComponent_C_OnLoaded_085089B14AC10467FBC409BEB05D5F01_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UIProjectionComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.SetWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UHuntingWidget>Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_UIProjectionComponent_C::SetWidget(TSoftClassPtr<class UHuntingWidget> Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "SetWidget");

	Params::UBP_UIProjectionComponent_C_SetWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIProjectionComponent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "ReceiveEndPlay");

	Params::UBP_UIProjectionComponent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.ExecuteUbergraph_BP_UIProjectionComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsW_Projection_Widget                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsW_Projection_Widget_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UHuntingWidget>K2Node_CustomEvent_Widget                                        (HasGetValueTypeHash)

void UBP_UIProjectionComponent_C::ExecuteUbergraph_BP_UIProjectionComponent(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_1, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsW_Projection_Widget, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* Temp_class_Variable_1, class UClass* K2Node_ClassDynamicCast_AsW_Projection_Widget_1, bool K2Node_ClassDynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValidSoftClassReference_ReturnValue_1, TSoftClassPtr<class UHuntingWidget> K2Node_CustomEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "ExecuteUbergraph_BP_UIProjectionComponent");

	Params::UBP_UIProjectionComponent_C_ExecuteUbergraph_BP_UIProjectionComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsW_Projection_Widget = K2Node_ClassDynamicCast_AsW_Projection_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_ClassDynamicCast_AsW_Projection_Widget_1 = K2Node_ClassDynamicCast_AsW_Projection_Widget_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue_1 = CallFunc_IsValidSoftClassReference_ReturnValue_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIProjectionComponent.BP_UIProjectionComponent_C.ProjectionUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIProjectionComponent_C::ProjectionUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_C", "ProjectionUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


