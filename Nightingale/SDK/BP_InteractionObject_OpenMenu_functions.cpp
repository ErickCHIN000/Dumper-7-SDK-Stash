#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractionObject_OpenMenu.BP_InteractionObject_OpenMenu_C
// (None)

class UClass* UBP_InteractionObject_OpenMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractionObject_OpenMenu_C");

	return Clss;
}


// BP_InteractionObject_OpenMenu_C BP_InteractionObject_OpenMenu.Default__BP_InteractionObject_OpenMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractionObject_OpenMenu_C* UBP_InteractionObject_OpenMenu_C::GetDefaultObj()
{
	static class UBP_InteractionObject_OpenMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractionObject_OpenMenu_C*>(UBP_InteractionObject_OpenMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractionObject_OpenMenu.BP_InteractionObject_OpenMenu_C.SpawnMenu
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_OpenMenu_C::SpawnMenu(class UObject* Pawn, class UClass* Class, class UObject* Structure, bool* Success, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_IsValid_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UNWXCommonWindowWidget* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_OpenMenu_C", "SpawnMenu");

	Params::UBP_InteractionObject_OpenMenu_C_SpawnMenu_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Class = Class;
	Parms.Structure = Structure;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_InteractionObject_OpenMenu.BP_InteractionObject_OpenMenu_C.OnClientOpenMenu
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_OpenMenu_C::OnClientOpenMenu(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_OpenMenu_C", "OnClientOpenMenu");

	Params::UBP_InteractionObject_OpenMenu_C_OnClientOpenMenu_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InteractionObject_OpenMenu.BP_InteractionObject_OpenMenu_C.ExecuteInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParsingIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_OpenMenu_C::ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_OpenMenu_C", "ExecuteInteraction");

	Params::UBP_InteractionObject_OpenMenu_C_ExecuteInteraction_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.Payload = Payload;
	Parms.StartingParseIndex = StartingParseIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (NewParsingIndex != nullptr)
		*NewParsingIndex = Parms.NewParsingIndex;

}


// Function BP_InteractionObject_OpenMenu.BP_InteractionObject_OpenMenu_C.Client_ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParsingIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UNWXUserWidget>LMenuToOpen                                                      (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_OpenMenu*K2Node_DynamicCast_AsStructure_Interaction_Open_Menu             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsNWXCommon_Window_Widget                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnMenu_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_OpenMenu_C::Client_ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, TSoftClassPtr<class UNWXUserWidget> LMenuToOpen, bool CallFunc_IsValid_ReturnValue, class UStructureInteraction_OpenMenu* K2Node_DynamicCast_AsStructure_Interaction_Open_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsNWXCommon_Window_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_SpawnMenu_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_OpenMenu_C", "Client_ExecuteInteraction");

	Params::UBP_InteractionObject_OpenMenu_C_Client_ExecuteInteraction_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.Payload = Payload;
	Parms.StartingParseIndex = StartingParseIndex;
	Parms.LMenuToOpen = LMenuToOpen;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Interaction_Open_Menu = K2Node_DynamicCast_AsStructure_Interaction_Open_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsNWXCommon_Window_Widget = K2Node_ClassDynamicCast_AsNWXCommon_Window_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_SpawnMenu_Success = CallFunc_SpawnMenu_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (NewParsingIndex != nullptr)
		*NewParsingIndex = Parms.NewParsingIndex;

}


// Function BP_InteractionObject_OpenMenu.BP_InteractionObject_OpenMenu_C.PreOpenMenu
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_OpenMenu_C::PreOpenMenu(class UObject* Structure, class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_OpenMenu_C", "PreOpenMenu");

	Params::UBP_InteractionObject_OpenMenu_C_PreOpenMenu_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InteractionObject_OpenMenu.BP_InteractionObject_OpenMenu_C.IsInteractionAvailable
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionAvailable_CanInteract                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

void UBP_InteractionObject_OpenMenu_C::IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class UObject* LStructure, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsInteractionAvailable_CanInteract, const class FString& CallFunc_GetFunctionName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_OpenMenu_C", "IsInteractionAvailable");

	Params::UBP_InteractionObject_OpenMenu_C_IsInteractionAvailable_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.LStructure = LStructure;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsInteractionAvailable_CanInteract = CallFunc_IsInteractionAvailable_CanInteract;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}

}


