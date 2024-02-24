#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractionComponent.BP_InteractionComponent_C
// (None)

class UClass* UBP_InteractionComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractionComponent_C");

	return Clss;
}


// BP_InteractionComponent_C BP_InteractionComponent.Default__BP_InteractionComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractionComponent_C* UBP_InteractionComponent_C::GetDefaultObj()
{
	static class UBP_InteractionComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractionComponent_C*>(UBP_InteractionComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractionComponent.BP_InteractionComponent_C.GetWeakpointComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               HasInterface                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeakPoint_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionComponent_C::GetWeakpointComponent(bool* HasInterface, TScriptInterface<class IBPI_WeakPoint_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponent_C", "GetWeakpointComponent");

	Params::UBP_InteractionComponent_C_GetWeakpointComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasInterface != nullptr)
		*HasInterface = Parms.HasInterface;

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_InteractionComponent.BP_InteractionComponent_C.GetPingInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bHasInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Ping_C>PingInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionComponent_C::GetPingInterface(bool* bHasInterface, TScriptInterface<class IBPI_Ping_C>* PingInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponent_C", "GetPingInterface");

	Params::UBP_InteractionComponent_C_GetPingInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bHasInterface != nullptr)
		*bHasInterface = Parms.bHasInterface;

	if (PingInterface != nullptr)
		*PingInterface = Parms.PingInterface;

}


// Function BP_InteractionComponent.BP_InteractionComponent_C.CanQueryInteractable
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     InteractableObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanQueryInteractable_Can_Query                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_InteractionComponent_C::CanQueryInteractable(class UObject* InteractableObject, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanQueryInteractable_Can_Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponent_C", "CanQueryInteractable");

	Params::UBP_InteractionComponent_C_CanQueryInteractable_Params Parms{};

	Parms.InteractableObject = InteractableObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanQueryInteractable_Can_Query = CallFunc_CanQueryInteractable_Can_Query;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InteractionComponent.BP_InteractionComponent_C.IsInteractionDisabled
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     InteractableObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class FString                      OutDisabledText                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionDisabled_bIsDisabled                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_IsInteractionDisabled_DisabledText                      (ZeroConstructor, HasGetValueTypeHash)

bool UBP_InteractionComponent_C::IsInteractionDisabled(class UObject* InteractableObject, class AController* Controller, struct FInteractionData& InteractionData, class FString* OutDisabledText, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInteractionDisabled_bIsDisabled, const class FString& CallFunc_IsInteractionDisabled_DisabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponent_C", "IsInteractionDisabled");

	Params::UBP_InteractionComponent_C_IsInteractionDisabled_Params Parms{};

	Parms.InteractableObject = InteractableObject;
	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInteractionDisabled_bIsDisabled = CallFunc_IsInteractionDisabled_bIsDisabled;
	Parms.CallFunc_IsInteractionDisabled_DisabledText = CallFunc_IsInteractionDisabled_DisabledText;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDisabledText != nullptr)
		*OutDisabledText = std::move(Parms.OutDisabledText);

	return Parms.ReturnValue;

}


// Function BP_InteractionComponent.BP_InteractionComponent_C.IsInteractableHarvestable
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     InteractableObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHarvestable_IsHarvestable                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_InteractionComponent_C::IsInteractableHarvestable(class UObject* InteractableObject, struct FInteractionData& InteractionData, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHarvestable_IsHarvestable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponent_C", "IsInteractableHarvestable");

	Params::UBP_InteractionComponent_C_IsInteractableHarvestable_Params Parms{};

	Parms.InteractableObject = InteractableObject;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsHarvestable_IsHarvestable = CallFunc_IsHarvestable_IsHarvestable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InteractionComponent.BP_InteractionComponent_C.GetInteractRaycastEndpoints
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                              InRange                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutRaycastStart                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutRaycastEnd                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRaycastEndpoints_Start                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRaycastEndpoints_End                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRaycastEndpoints_Range_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_InteractionComponent_C::GetInteractRaycastEndpoints(float InRange, struct FVector* OutRaycastStart, struct FVector* OutRaycastEnd, class AActor* Owner, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetRaycastEndpoints_Start, const struct FVector& CallFunc_GetRaycastEndpoints_End, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetRaycastEndpoints_Range_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponent_C", "GetInteractRaycastEndpoints");

	Params::UBP_InteractionComponent_C_GetInteractRaycastEndpoints_Params Parms{};

	Parms.InRange = InRange;
	Parms.Owner = Owner;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRaycastEndpoints_Start = CallFunc_GetRaycastEndpoints_Start;
	Parms.CallFunc_GetRaycastEndpoints_End = CallFunc_GetRaycastEndpoints_End;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetRaycastEndpoints_Range_ImplicitCast = CallFunc_GetRaycastEndpoints_Range_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRaycastStart != nullptr)
		*OutRaycastStart = std::move(Parms.OutRaycastStart);

	if (OutRaycastEnd != nullptr)
		*OutRaycastEnd = std::move(Parms.OutRaycastEnd);

	return Parms.ReturnValue;

}


// Function BP_InteractionComponent.BP_InteractionComponent_C.GetHarvestableIcon
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     InteractableObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetInteractIcon_Icon                                    (HasGetValueTypeHash)

TSoftObjectPtr<class UTexture2D> UBP_InteractionComponent_C::GetHarvestableIcon(class UObject* InteractableObject, struct FInteractionData& InteractionData, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetInteractIcon_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponent_C", "GetHarvestableIcon");

	Params::UBP_InteractionComponent_C_GetHarvestableIcon_Params Parms{};

	Parms.InteractableObject = InteractableObject;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInteractIcon_Icon = CallFunc_GetInteractIcon_Icon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InteractionComponent.BP_InteractionComponent_C.CanInteractWithActor
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     InteractableObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteractWithActor_InteractAvailable                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_InteractionComponent_C::CanInteractWithActor(class UObject* InteractableObject, class AController* Controller, struct FInteractionData& InteractionData, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanInteractWithActor_InteractAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponent_C", "CanInteractWithActor");

	Params::UBP_InteractionComponent_C_CanInteractWithActor_Params Parms{};

	Parms.InteractableObject = InteractableObject;
	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanInteractWithActor_InteractAvailable = CallFunc_CanInteractWithActor_InteractAvailable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InteractionComponent.BP_InteractionComponent_C.BuildInteractionAbilityPayloadHandle
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     InteractableObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleOutPayloadHandle                                                 (Parm, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InteractionRequiresClientOnly_RequiresClientAction      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromBool_ReturnValue                      (None)
// bool                               CallFunc_HoldInteractionAvailable_bAvailable                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromBool_ReturnValue_1                    (None)
// struct FGameplayAbilityPayloadHandleCallFunc_AppendPayloadHandle_ReturnValue                         (None)

void UBP_InteractionComponent_C::BuildInteractionAbilityPayloadHandle(class UObject* InteractableObject, class AController* Controller, struct FGameplayAbilityPayloadHandle* OutPayloadHandle, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InteractionRequiresClientOnly_RequiresClientAction, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, bool CallFunc_HoldInteractionAvailable_bAvailable, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue_1, const struct FGameplayAbilityPayloadHandle& CallFunc_AppendPayloadHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponent_C", "BuildInteractionAbilityPayloadHandle");

	Params::UBP_InteractionComponent_C_BuildInteractionAbilityPayloadHandle_Params Parms{};

	Parms.InteractableObject = InteractableObject;
	Parms.Controller = Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_InteractionRequiresClientOnly_RequiresClientAction = CallFunc_InteractionRequiresClientOnly_RequiresClientAction;
	Parms.K2Node_DynamicCast_AsBPI_Interactable_1 = K2Node_DynamicCast_AsBPI_Interactable_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AbilityPayloadFromBool_ReturnValue = CallFunc_AbilityPayloadFromBool_ReturnValue;
	Parms.CallFunc_HoldInteractionAvailable_bAvailable = CallFunc_HoldInteractionAvailable_bAvailable;
	Parms.CallFunc_AbilityPayloadFromBool_ReturnValue_1 = CallFunc_AbilityPayloadFromBool_ReturnValue_1;
	Parms.CallFunc_AppendPayloadHandle_ReturnValue = CallFunc_AppendPayloadHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPayloadHandle != nullptr)
		*OutPayloadHandle = std::move(Parms.OutPayloadHandle);

}

}


