#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// (Actor, PlayerController)

class UClass* ABP_PlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerController_C");

	return Clss;
}


// BP_PlayerController_C BP_PlayerController.Default__BP_PlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerController_C* ABP_PlayerController_C::GetDefaultObj()
{
	static class ABP_PlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerController_C*>(ABP_PlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerController.BP_PlayerController_C.GetBuildModeFeedbackComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BuildModeFeedbackComponent_C*Component                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::GetBuildModeFeedbackComponent(class UBP_BuildModeFeedbackComponent_C** Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetBuildModeFeedbackComponent");

	Params::ABP_PlayerController_C_GetBuildModeFeedbackComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;

}


// Function BP_PlayerController.BP_PlayerController_C.GetWeakpointComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               HasInterface                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeakPoint_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::GetWeakpointComponent(bool* HasInterface, TScriptInterface<class IBPI_WeakPoint_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetWeakpointComponent");

	Params::ABP_PlayerController_C_GetWeakpointComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasInterface != nullptr)
		*HasInterface = Parms.HasInterface;

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_PlayerController.BP_PlayerController_C.GetPingInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bHasInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Ping_C>PingInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::GetPingInterface(bool* bHasInterface, TScriptInterface<class IBPI_Ping_C>* PingInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetPingInterface");

	Params::ABP_PlayerController_C_GetPingInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bHasInterface != nullptr)
		*bHasInterface = Parms.bHasInterface;

	if (PingInterface != nullptr)
		*PingInterface = Parms.PingInterface;

}


// Function BP_PlayerController.BP_PlayerController_C.IsCardNotificationQueueEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEmpty                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::IsCardNotificationQueueEmpty(bool* bIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "IsCardNotificationQueueEmpty");

	Params::ABP_PlayerController_C_IsCardNotificationQueueEmpty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsEmpty != nullptr)
		*bIsEmpty = Parms.bIsEmpty;

}


// Function BP_PlayerController.BP_PlayerController_C.StoreEnded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IShopInteractionModel>ShopInteractionSession                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::StoreEnded(TScriptInterface<class IShopInteractionModel>& ShopInteractionSession, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "StoreEnded");

	Params::ABP_PlayerController_C_StoreEnded_Params Parms{};

	Parms.ShopInteractionSession = ShopInteractionSession;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.StoreStarted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IShopInteractionModel>ShopInteractionSession                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::StoreStarted(TScriptInterface<class IShopInteractionModel>& ShopInteractionSession, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "StoreStarted");

	Params::ABP_PlayerController_C_StoreStarted_Params Parms{};

	Parms.ShopInteractionSession = ShopInteractionSession;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OnInteractionSelectedFromMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InteractionAssetUID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnInteractionSelectedFromMenu(const struct FGuid& InteractionAssetUID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnInteractionSelectedFromMenu");

	Params::ABP_PlayerController_C_OnInteractionSelectedFromMenu_Params Parms{};

	Parms.InteractionAssetUID = InteractionAssetUID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HandleArachnophobiaGlobalEmitterVariable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsArachnophobiaModeOn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::HandleArachnophobiaGlobalEmitterVariable(bool IsArachnophobiaModeOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HandleArachnophobiaGlobalEmitterVariable");

	Params::ABP_PlayerController_C_HandleArachnophobiaGlobalEmitterVariable_Params Parms{};

	Parms.IsArachnophobiaModeOn = IsArachnophobiaModeOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.On Conversation End
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::On_Conversation_End(struct FGuid& ConversationInstanceId, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "On Conversation End");

	Params::ABP_PlayerController_C_On_Conversation_End_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OnConversationStarted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ConversationInstanceId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnConversationStarted(struct FGuid& ConversationInstanceId, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnConversationStarted");

	Params::ABP_PlayerController_C_OnConversationStarted_Params Parms{};

	Parms.ConversationInstanceId = ConversationInstanceId;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ShowMovieUntilPortalDeployment
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MovieMediaSourceURL                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXLoadingScreenMoviePlayerWidget*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadingScreenMoviePlayer_C*CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UNWXLoadingScreenMoviePlayerWidget* ABP_PlayerController_C::ShowMovieUntilPortalDeployment(const class FString& MovieMediaSourceURL, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_LoadingScreenMoviePlayer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ShowMovieUntilPortalDeployment");

	Params::ABP_PlayerController_C_ShowMovieUntilPortalDeployment_Params Parms{};

	Parms.MovieMediaSourceURL = MovieMediaSourceURL;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerController.BP_PlayerController_C.ArachnophobiaModeSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Bool                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CreatureBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_CreatureBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ArachnophobiaModeSet(bool Bool, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<class ABP_CreatureBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ArachnophobiaModeSet");

	Params::ABP_PlayerController_C_ArachnophobiaModeSet_Params Parms{};

	Parms.Bool = Bool;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.FlushHeldActionsOnEnterUIMode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ActionComponent_C*       ActionComponent                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       PlayerPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionTypes       CurentInputAction                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EInputActionTypes>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionTypes       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::FlushHeldActionsOnEnterUIMode(class UBP_ActionComponent_C* ActionComponent, class APawn* PlayerPawn, enum class EInputActionTypes CurentInputAction, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_ActionComponent_C* CallFunc_GetComponentByClass_ReturnValue, TArray<enum class EInputActionTypes>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class EInputActionTypes CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "FlushHeldActionsOnEnterUIMode");

	Params::ABP_PlayerController_C_FlushHeldActionsOnEnterUIMode_Params Parms{};

	Parms.ActionComponent = ActionComponent;
	Parms.PlayerPawn = PlayerPawn;
	Parms.CurentInputAction = CurentInputAction;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OnInputModeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UIMode                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputContext           InputContext                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputContext           CallFunc_GetInputContext_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnInputModeChanged(bool UIMode, enum class EInputContext InputContext, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, enum class EInputContext CallFunc_GetInputContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnInputModeChanged");

	Params::ABP_PlayerController_C_OnInputModeChanged_Params Parms{};

	Parms.UIMode = UIMode;
	Parms.InputContext = InputContext;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetInputContext_ReturnValue = CallFunc_GetInputContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.RunGraphicsCommandWorkarounds
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Commands                                                         (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::RunGraphicsCommandWorkarounds(const TArray<class FString>& Commands, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "RunGraphicsCommandWorkarounds");

	Params::ABP_PlayerController_C_RunGraphicsCommandWorkarounds_Params Parms{};

	Parms.Commands = Commands;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.PopulateHintFromInteraction
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            Interaction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FInteractionUIContext       InteractionUIContext                                             (Edit, BlueprintVisible)
// class UObject*                     InteractableObject                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        MultipleOptionsSubtext                                           (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractableObjectFromInteractionData_ReturnValue    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetInteractText_InteractText                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::PopulateHintFromInteraction(struct FInteractionData& Interaction, const struct FInteractionUIContext& InteractionUIContext, class UObject* InteractableObject, class FText MultipleOptionsSubtext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, bool CallFunc_TextIsEmpty_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue, const class FString& CallFunc_GetInteractText_InteractText, class FText CallFunc_Conv_StringToText_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "PopulateHintFromInteraction");

	Params::ABP_PlayerController_C_PopulateHintFromInteraction_Params Parms{};

	Parms.Interaction = Interaction;
	Parms.InteractionUIContext = InteractionUIContext;
	Parms.InteractableObject = InteractableObject;
	Parms.MultipleOptionsSubtext = MultipleOptionsSubtext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInteractableObjectFromInteractionData_ReturnValue = CallFunc_GetInteractableObjectFromInteractionData_ReturnValue;
	Parms.CallFunc_GetInteractText_InteractText = CallFunc_GetInteractText_InteractText;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions = CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Ability2Held
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               L_LocalPlayer                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IRadialMenuInterface>>RadialMenuEntries                                                (Edit, BlueprintVisible)
// class AEquippableItem*             EquippedRangedWeapon                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     K2Node_DynamicCast_AsBP_Ranged_Weapon_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                CallFunc_GetActiveKeysFromInputAction_OutKeys                    (ReferenceParm)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IRadialMenuInterface>>CallFunc_GenerateSpellRadialMenuEntriesForWeapon_OutRadialMenuEntries(ReferenceParm)
// bool                               CallFunc_GenerateSpellRadialMenuEntriesForWeapon_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SelectClass_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_RadialMenuWidget_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeaponUser_C>K2Node_DynamicCast_AsBPI_Weapon_User                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedRangedWeapon_EquippedItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IRadialMenuInterface>>CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries(ReferenceParm)
// bool                               CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Ability2Held(class UInputAction* InputAction, bool L_LocalPlayer, const TArray<TScriptInterface<class IRadialMenuInterface>>& RadialMenuEntries, class AEquippableItem* EquippedRangedWeapon, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class AEquippableItem* Temp_object_Variable, TArray<struct FKey>& CallFunc_GetActiveKeysFromInputAction_OutKeys, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, TArray<TScriptInterface<class IRadialMenuInterface>>& CallFunc_GenerateSpellRadialMenuEntriesForWeapon_OutRadialMenuEntries, bool CallFunc_GenerateSpellRadialMenuEntriesForWeapon_ReturnValue, class UClass* CallFunc_SelectClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UWBP_RadialMenuWidget_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess_2, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, TArray<TScriptInterface<class IRadialMenuInterface>>& CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries, bool CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Ability2Held");

	Params::ABP_PlayerController_C_Ability2Held_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.L_LocalPlayer = L_LocalPlayer;
	Parms.RadialMenuEntries = RadialMenuEntries;
	Parms.EquippedRangedWeapon = EquippedRangedWeapon;
	Parms.K2Node_DynamicCast_AsBP_Ranged_Weapon_Base = K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetActiveKeysFromInputAction_OutKeys = CallFunc_GetActiveKeysFromInputAction_OutKeys;
	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GenerateSpellRadialMenuEntriesForWeapon_OutRadialMenuEntries = CallFunc_GenerateSpellRadialMenuEntriesForWeapon_OutRadialMenuEntries;
	Parms.CallFunc_GenerateSpellRadialMenuEntriesForWeapon_ReturnValue = CallFunc_GenerateSpellRadialMenuEntriesForWeapon_ReturnValue;
	Parms.CallFunc_SelectClass_ReturnValue = CallFunc_SelectClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget = K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent;
	Parms.K2Node_DynamicCast_AsBPI_Weapon_User = K2Node_DynamicCast_AsBPI_Weapon_User;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetEquippedRangedWeapon_EquippedItem = CallFunc_GetEquippedRangedWeapon_EquippedItem;
	Parms.CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries = CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries;
	Parms.CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue = CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Ability1Held
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               L_LocalPlayer                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IRadialMenuInterface>>RadialMenuEntries                                                (Edit, BlueprintVisible)
// class AEquippableItem*             EquippedRangedWeapon                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     K2Node_DynamicCast_AsBP_Ranged_Weapon_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                CallFunc_GetActiveKeysFromInputAction_OutKeys                    (ReferenceParm)
// class UClass*                      CallFunc_SelectClass_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeaponUser_C>K2Node_DynamicCast_AsBPI_Weapon_User                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_RadialMenuWidget_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedRangedWeapon_EquippedItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IRadialMenuInterface>>CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries(ReferenceParm)
// bool                               CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Ability1Held(class UInputAction* InputAction, bool L_LocalPlayer, const TArray<TScriptInterface<class IRadialMenuInterface>>& RadialMenuEntries, class AEquippableItem* EquippedRangedWeapon, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, TArray<struct FKey>& CallFunc_GetActiveKeysFromInputAction_OutKeys, class UClass* CallFunc_SelectClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget, bool K2Node_ClassDynamicCast_bSuccess, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess_1, class UWBP_RadialMenuWidget_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, TArray<TScriptInterface<class IRadialMenuInterface>>& CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries, bool CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Ability1Held");

	Params::ABP_PlayerController_C_Ability1Held_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.L_LocalPlayer = L_LocalPlayer;
	Parms.RadialMenuEntries = RadialMenuEntries;
	Parms.EquippedRangedWeapon = EquippedRangedWeapon;
	Parms.K2Node_DynamicCast_AsBP_Ranged_Weapon_Base = K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetActiveKeysFromInputAction_OutKeys = CallFunc_GetActiveKeysFromInputAction_OutKeys;
	Parms.CallFunc_SelectClass_ReturnValue = CallFunc_SelectClass_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget = K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Weapon_User = K2Node_DynamicCast_AsBPI_Weapon_User;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_GetEquippedRangedWeapon_EquippedItem = CallFunc_GetEquippedRangedWeapon_EquippedItem;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent;
	Parms.CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries = CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries;
	Parms.CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue = CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Is Player Not Swinging Weapon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PlayerController_C::Is_Player_Not_Swinging_Weapon(class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Is Player Not Swinging Weapon");

	Params::ABP_PlayerController_C_Is_Player_Not_Swinging_Weapon_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerController.BP_PlayerController_C.InteractHeld
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_RadialMenuWidget_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                CallFunc_GetActiveKeysFromInputAction_OutKeys                    (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCommonHUD*               CallFunc_GetNWXCommonHUD_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TraceForTargetToInteract_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            CallFunc_TraceForTargetToInteract_InteractionData                (ContainsInstancedReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXInteractionOption>CallFunc_GetInteractionOptions_InteractionOptions                (ReferenceParm)
// TArray<TScriptInterface<class IRadialMenuInterface>>CallFunc_GenerateRadialMenuEntriesFromInteractions_OutRadialMenuEntries(ReferenceParm)
// class UBP_UIMenusComponent_C*      CallFunc_GetLocalPlayerMenusComponent_MenusComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::InteractHeld(class UInputAction* InputAction, bool CallFunc_IsValid_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_RadialMenuWidget_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, TArray<struct FKey>& CallFunc_GetActiveKeysFromInputAction_OutKeys, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXCommonHUD* CallFunc_GetNWXCommonHUD_ReturnValue, bool CallFunc_TraceForTargetToInteract_Success, const struct FInteractionData& CallFunc_TraceForTargetToInteract_InteractionData, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions, TArray<struct FNWXInteractionOption>& CallFunc_GetInteractionOptions_InteractionOptions, TArray<TScriptInterface<class IRadialMenuInterface>>& CallFunc_GenerateRadialMenuEntriesFromInteractions_OutRadialMenuEntries, class UBP_UIMenusComponent_C* CallFunc_GetLocalPlayerMenusComponent_MenusComponent, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "InteractHeld");

	Params::ABP_PlayerController_C_InteractHeld_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_GetActiveKeysFromInputAction_OutKeys = CallFunc_GetActiveKeysFromInputAction_OutKeys;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXCommonHUD_ReturnValue = CallFunc_GetNWXCommonHUD_ReturnValue;
	Parms.CallFunc_TraceForTargetToInteract_Success = CallFunc_TraceForTargetToInteract_Success;
	Parms.CallFunc_TraceForTargetToInteract_InteractionData = CallFunc_TraceForTargetToInteract_InteractionData;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue = CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions = CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions;
	Parms.CallFunc_GetInteractionOptions_InteractionOptions = CallFunc_GetInteractionOptions_InteractionOptions;
	Parms.CallFunc_GenerateRadialMenuEntriesFromInteractions_OutRadialMenuEntries = CallFunc_GenerateRadialMenuEntriesFromInteractions_OutRadialMenuEntries;
	Parms.CallFunc_GetLocalPlayerMenusComponent_MenusComponent = CallFunc_GetLocalPlayerMenusComponent_MenusComponent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.GetMenusComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMenusComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_UIMenusComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMenusComponent* ABP_PlayerController_C::GetMenusComponent(class UBP_UIMenusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetMenusComponent");

	Params::ABP_PlayerController_C_GetMenusComponent_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerController.BP_PlayerController_C.GetContainerFromProvider
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>CallFunc_GetContainerFromProvider_self_CastInput                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetContainerFromProvider_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_PlayerController_C::GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle, TScriptInterface<class IItemContainerProvider> CallFunc_GetContainerFromProvider_self_CastInput, TScriptInterface<class IItemContainer> CallFunc_GetContainerFromProvider_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetContainerFromProvider");

	Params::ABP_PlayerController_C_GetContainerFromProvider_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;
	Parms.CallFunc_GetContainerFromProvider_self_CastInput = CallFunc_GetContainerFromProvider_self_CastInput;
	Parms.CallFunc_GetContainerFromProvider_ReturnValue = CallFunc_GetContainerFromProvider_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerController.BP_PlayerController_C.HasContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>CallFunc_HasContainer_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasContainer_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PlayerController_C::HasContainer(TScriptInterface<class IItemContainer>& Container, TScriptInterface<class IItemContainerProvider> CallFunc_HasContainer_self_CastInput, bool CallFunc_HasContainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HasContainer");

	Params::ABP_PlayerController_C_HasContainer_Params Parms{};

	Parms.Container = Container;
	Parms.CallFunc_HasContainer_self_CastInput = CallFunc_HasContainer_self_CastInput;
	Parms.CallFunc_HasContainer_ReturnValue = CallFunc_HasContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerController.BP_PlayerController_C.HasContainerFromHandle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>CallFunc_HasContainerFromHandle_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasContainerFromHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PlayerController_C::HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle, TScriptInterface<class IItemContainerProvider> CallFunc_HasContainerFromHandle_self_CastInput, bool CallFunc_HasContainerFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HasContainerFromHandle");

	Params::ABP_PlayerController_C_HasContainerFromHandle_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;
	Parms.CallFunc_HasContainerFromHandle_self_CastInput = CallFunc_HasContainerFromHandle_self_CastInput;
	Parms.CallFunc_HasContainerFromHandle_ReturnValue = CallFunc_HasContainerFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerController.BP_PlayerController_C.GetDefaultContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>CallFunc_GetDefaultContainer_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_PlayerController_C::GetDefaultContainer(TScriptInterface<class IItemContainerProvider> CallFunc_GetDefaultContainer_self_CastInput, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetDefaultContainer");

	Params::ABP_PlayerController_C_GetDefaultContainer_Params Parms{};

	Parms.CallFunc_GetDefaultContainer_self_CastInput = CallFunc_GetDefaultContainer_self_CastInput;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerController.BP_PlayerController_C.OnInitialInventoryReceived
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasicAwaiter*               CallFunc_GetInventoryAwaiter_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnInitialInventoryReceived(class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnInitialInventoryReceived");

	Params::ABP_PlayerController_C_OnInitialInventoryReceived_Params Parms{};

	Parms.CallFunc_GetInventoryAwaiter_ReturnValue = CallFunc_GetInventoryAwaiter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OnServerEnterCharacterCraftingStation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FCraftingRecipeReference    SelectedRecipe                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FGameplayTag                EnterStationTag                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue            (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnServerEnterCharacterCraftingStation(struct FCraftingRecipeReference& SelectedRecipe, const struct FGameplayTag& EnterStationTag, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnServerEnterCharacterCraftingStation");

	Params::ABP_PlayerController_C_OnServerEnterCharacterCraftingStation_Params Parms{};

	Parms.SelectedRecipe = SelectedRecipe;
	Parms.EnterStationTag = EnterStationTag;
	Parms.CallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue = CallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ToggleCombatLog
// (Exec, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Debug_CombatLog_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToggleCombatLog_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PlayerController_C::ToggleCombatLog(bool CallFunc_IsValid_ReturnValue, class UWBP_Debug_CombatLog_C* CallFunc_Create_ReturnValue, bool CallFunc_ToggleCombatLog_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ToggleCombatLog");

	Params::ABP_PlayerController_C_ToggleCombatLog_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_ToggleCombatLog_ReturnValue = CallFunc_ToggleCombatLog_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerController.BP_PlayerController_C.OnRep_CombatLogEntries
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnRep_CombatLogEntries(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnRep_CombatLogEntries");

	Params::ABP_PlayerController_C_OnRep_CombatLogEntries_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.IsActionInputPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionTypes       Action_Input_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Pressed                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::IsActionInputPressed(enum class EInputActionTypes Action_Input_Type, bool* Is_Pressed, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "IsActionInputPressed");

	Params::ABP_PlayerController_C_IsActionInputPressed_Params Parms{};

	Parms.Action_Input_Type = Action_Input_Type;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Pressed != nullptr)
		*Is_Pressed = Parms.Is_Pressed;

}


// Function BP_PlayerController.BP_PlayerController_C.SetActionInputState
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionTypes       Input_Action_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::SetActionInputState(enum class EInputActionTypes Input_Action_Type, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "SetActionInputState");

	Params::ABP_PlayerController_C_SetActionInputState_Params Parms{};

	Parms.Input_Action_Type = Input_Action_Type;
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.AFKKickTimerFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsPlayInEditor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::AFKKickTimerFinished(bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "AFKKickTimerFinished");

	Params::ABP_PlayerController_C_AFKKickTimerFinished_Params Parms{};

	Parms.CallFunc_IsPlayInEditor_ReturnValue = CallFunc_IsPlayInEditor_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.AFKTimerFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::AFKTimerFinished(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "AFKTimerFinished");

	Params::ABP_PlayerController_C_AFKTimerFinished_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.StartAFKTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::StartAFKTimer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "StartAFKTimer");

	Params::ABP_PlayerController_C_StartAFKTimer_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ResetAFKTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ResetAFKTimer(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ResetAFKTimer");

	Params::ABP_PlayerController_C_ResetAFKTimer_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ServerFastTravelToMapPinLocation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinData                 MapPinData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class APawn*                       FastTravelPawn                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    FastTravelRotation                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     FastTravelPosition                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_TeleportPawnToLocation_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_4                         (None)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_5                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_6                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerFastTravel_FastTravelPermitted                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ServerFastTravelToMapPinLocation(const struct FMapPinData& MapPinData, class APawn* FastTravelPawn, const struct FRotator& FastTravelRotation, const struct FVector& FastTravelPosition, class FText CallFunc_Conv_ObjectToText_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_ObjectToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_ObjectToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_TeleportPawnToLocation_Result, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Conv_ObjectToText_ReturnValue_4, class FText CallFunc_Conv_ObjectToText_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const class FString& CallFunc_Conv_VectorToString_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_ObjectToText_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_VectorToString_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, bool CallFunc_CanPlayerFastTravel_FastTravelPermitted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ServerFastTravelToMapPinLocation");

	Params::ABP_PlayerController_C_ServerFastTravelToMapPinLocation_Params Parms{};

	Parms.MapPinData = MapPinData;
	Parms.FastTravelPawn = FastTravelPawn;
	Parms.FastTravelRotation = FastTravelRotation;
	Parms.FastTravelPosition = FastTravelPosition;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_1 = CallFunc_Conv_ObjectToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_1 = CallFunc_Conv_VectorToString_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_2 = CallFunc_Conv_ObjectToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_3 = CallFunc_Conv_ObjectToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_TeleportPawnToLocation_Result = CallFunc_TeleportPawnToLocation_Result;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_4 = CallFunc_Conv_ObjectToText_ReturnValue_4;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_5 = CallFunc_Conv_ObjectToText_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_2 = CallFunc_Conv_VectorToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_6 = CallFunc_Conv_ObjectToText_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_3 = CallFunc_Conv_VectorToString_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_CanPlayerFastTravel_FastTravelPermitted = CallFunc_CanPlayerFastTravel_FastTravelPermitted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ClientFastTravelToMapPinLocation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinData                 MapPinData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerFastTravel_FastTravelPermitted                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ClientFastTravelToMapPinLocation(const struct FMapPinData& MapPinData, const class FString& CallFunc_Conv_VectorToString_ReturnValue, bool CallFunc_CanPlayerFastTravel_FastTravelPermitted, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ClientFastTravelToMapPinLocation");

	Params::ABP_PlayerController_C_ClientFastTravelToMapPinLocation_Params Parms{};

	Parms.MapPinData = MapPinData;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_CanPlayerFastTravel_FastTravelPermitted = CallFunc_CanPlayerFastTravel_FastTravelPermitted;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.CanPlayerFastTravel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               FastTravelPermitted                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyAbilityActive_bIsAnyAbilityActive                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::CanPlayerFastTravel(bool* FastTravelPermitted, bool CallFunc_CanUseSupportCommands_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAnyAbilityActive_bIsAnyAbilityActive, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "CanPlayerFastTravel");

	Params::ABP_PlayerController_C_CanPlayerFastTravel_Params Parms{};

	Parms.CallFunc_CanUseSupportCommands_ReturnValue = CallFunc_CanUseSupportCommands_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component = K2Node_DynamicCast_AsNWXAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsAnyAbilityActive_bIsAnyAbilityActive = CallFunc_IsAnyAbilityActive_bIsAnyAbilityActive;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FastTravelPermitted != nullptr)
		*FastTravelPermitted = Parms.FastTravelPermitted;

}


// Function BP_PlayerController.BP_PlayerController_C.GetMapTracker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapTracker_C*            MapTrackerComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::GetMapTracker(class UBP_MapTracker_C** MapTrackerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetMapTracker");

	Params::ABP_PlayerController_C_GetMapTracker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MapTrackerComponent != nullptr)
		*MapTrackerComponent = Parms.MapTrackerComponent;

}


// Function BP_PlayerController.BP_PlayerController_C.TraceForTargetToInteract
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (Parm, OutParm, ContainsInstancedReference)
// class UPlayerInteractionComponent* InteractionComponent                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       PlayerPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ActorsToIgnore                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerInteractionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            CallFunc_TraceForTargetDataForInteraction_OutInteractionData     (ContainsInstancedReference)
// bool                               CallFunc_TraceForTargetDataForInteraction_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::TraceForTargetToInteract(bool* Success, struct FInteractionData* InteractionData, class UPlayerInteractionComponent* InteractionComponent, class APawn* PlayerPawn, const TArray<class AActor*>& ActorsToIgnore, class AEquippableItem* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UPlayerInteractionComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FInteractionData& CallFunc_TraceForTargetDataForInteraction_OutInteractionData, bool CallFunc_TraceForTargetDataForInteraction_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "TraceForTargetToInteract");

	Params::ABP_PlayerController_C_TraceForTargetToInteract_Params Parms{};

	Parms.InteractionComponent = InteractionComponent;
	Parms.PlayerPawn = PlayerPawn;
	Parms.ActorsToIgnore = ActorsToIgnore;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TraceForTargetDataForInteraction_OutInteractionData = CallFunc_TraceForTargetDataForInteraction_OutInteractionData;
	Parms.CallFunc_TraceForTargetDataForInteraction_ReturnValue = CallFunc_TraceForTargetDataForInteraction_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (InteractionData != nullptr)
		*InteractionData = std::move(Parms.InteractionData);

}


// Function BP_PlayerController.BP_PlayerController_C.EnableOptimizations
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::EnableOptimizations(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "EnableOptimizations");

	Params::ABP_PlayerController_C_EnableOptimizations_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OnInteractPressed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TraceForTargetToInteract_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            CallFunc_TraceForTargetToInteract_InteractionData                (ContainsInstancedReference)
// bool                               CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             K2Node_DynamicCast_AsNWXAICharacter                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnInteractPressed(const struct FInteractionData& InteractionData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TraceForTargetToInteract_Success, const struct FInteractionData& CallFunc_TraceForTargetToInteract_InteractionData, bool CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ANWXAICharacter* K2Node_DynamicCast_AsNWXAICharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnInteractPressed");

	Params::ABP_PlayerController_C_OnInteractPressed_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TraceForTargetToInteract_Success = CallFunc_TraceForTargetToInteract_Success;
	Parms.CallFunc_TraceForTargetToInteract_InteractionData = CallFunc_TraceForTargetToInteract_InteractionData;
	Parms.CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue = CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAICharacter = K2Node_DynamicCast_AsNWXAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.GetEyeTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  EyeTransform                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::GetEyeTransform(struct FTransform* EyeTransform, const struct FTransform& CallFunc_GetTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetEyeTransform");

	Params::ABP_PlayerController_C_GetEyeTransform_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeTransform != nullptr)
		*EyeTransform = std::move(Parms.EyeTransform);

}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteInteraction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UPlayerInteractionComponent* InteractionComponent                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       PlayerPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerInteractionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ExecuteInteraction(const struct FInteractionData& InteractionData, class UPlayerInteractionComponent* InteractionComponent, class APawn* PlayerPawn, bool CallFunc_IsValid_ReturnValue, class UPlayerInteractionComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ExecuteInteraction");

	Params::ABP_PlayerController_C_ExecuteInteraction_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.InteractionComponent = InteractionComponent;
	Parms.PlayerPawn = PlayerPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.AreTestsRunning
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AreTestsRunning                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::AreTestsRunning(bool* AreTestsRunning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "AreTestsRunning");

	Params::ABP_PlayerController_C_AreTestsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AreTestsRunning != nullptr)
		*AreTestsRunning = Parms.AreTestsRunning;

}


// Function BP_PlayerController.BP_PlayerController_C.SetCreatureClassToSpawn
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AIEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class UClass*>                CreatureClasses                                                  (Edit, BlueprintVisible)
// class UClass*                      CreatureToSpawn                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class UClass*>                K2Node_MakeSet_Set                                               (None)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class UClass*>                K2Node_MakeSet_Set_1                                             (None)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class UClass*>                K2Node_MakeSet_Set_2                                             (None)
// TSet<class UClass*>                K2Node_MakeSet_Set_3                                             (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSet<class UClass*>                K2Node_MakeSet_Set_4                                             (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::SetCreatureClassToSpawn(const class FString& Selection, int32 Count, bool AIEnabled, TSet<class UClass*> CreatureClasses, class UClass* CreatureToSpawn, bool Temp_bool_Variable, bool K2Node_SwitchString_CmpSuccess, double Temp_real_Variable, double Temp_real_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TSet<class UClass*> K2Node_MakeSet_Set, double K2Node_Select_Default, TSet<class UClass*> K2Node_MakeSet_Set_1, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TSet<class UClass*> K2Node_MakeSet_Set_2, TSet<class UClass*> K2Node_MakeSet_Set_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, TSet<class UClass*> K2Node_MakeSet_Set_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_FinishSpawningActor_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "SetCreatureClassToSpawn");

	Params::ABP_PlayerController_C_SetCreatureClassToSpawn_Params Parms{};

	Parms.Selection = Selection;
	Parms.Count = Count;
	Parms.AIEnabled = AIEnabled;
	Parms.CreatureClasses = CreatureClasses;
	Parms.CreatureToSpawn = CreatureToSpawn;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeSet_Set_1 = K2Node_MakeSet_Set_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeSet_Set_2 = K2Node_MakeSet_Set_2;
	Parms.K2Node_MakeSet_Set_3 = K2Node_MakeSet_Set_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_MakeSet_Set_4 = K2Node_MakeSet_Set_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetCreatureManager_CreatureManager = CallFunc_GetCreatureManager_CreatureManager;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager = K2Node_DynamicCast_AsBP_Creature_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.RequestInteraction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            RequestedInteraction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXInteractionOption>CallFunc_GetInteractionOptions_InteractionOptions                (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXInteractionOption       CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::RequestInteraction(const struct FInteractionData& RequestedInteraction, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<struct FNWXInteractionOption>& CallFunc_GetInteractionOptions_InteractionOptions, int32 CallFunc_Add_IntInt_ReturnValue, const struct FNWXInteractionOption& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "RequestInteraction");

	Params::ABP_PlayerController_C_RequestInteraction_Params Parms{};

	Parms.RequestedInteraction = RequestedInteraction;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetInteractionOptions_InteractionOptions = CallFunc_GetInteractionOptions_InteractionOptions;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions = CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.PrintActiveEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectQuery        K2Node_MakeStruct_GameplayEffectQuery                            (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_GetActiveEffects_ReturnValue                            (ReferenceParm)
// struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetActiveGameplayEffectDebugString_ReturnValue          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::PrintActiveEffects(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayEffectQuery& K2Node_MakeStruct_GameplayEffectQuery, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffects_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetActiveGameplayEffectDebugString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "PrintActiveEffects");

	Params::ABP_PlayerController_C_PrintActiveEffects_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEffectQuery = K2Node_MakeStruct_GameplayEffectQuery;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActiveEffects_ReturnValue = CallFunc_GetActiveEffects_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetActiveGameplayEffectDebugString_ReturnValue = CallFunc_GetActiveGameplayEffectDebugString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Update Interact
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PlayerPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// class UPlayerInteractionComponent* ControllingPawnInteractionComponent                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             PlayerCharacter                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ActorsToIgnore                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionUIContext       K2Node_MakeStruct_InteractionUIContext                           (None)
// struct FInteractionUIContext       K2Node_MakeStruct_InteractionUIContext_1                         (None)
// bool                               CallFunc_IsInAnyDeathState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerInteractionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            CallFunc_TraceForTargetDataForInteractionDisplay_OutInteractionData(ContainsInstancedReference)
// bool                               CallFunc_TraceForTargetDataForInteractionDisplay_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Update_Interact(class APawn* PlayerPawn, const struct FInteractionData& InteractionData, class UPlayerInteractionComponent* ControllingPawnInteractionComponent, class ABP_Character_C* PlayerCharacter, const TArray<class AActor*>& ActorsToIgnore, class AEquippableItem* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager_1, const struct FInteractionUIContext& K2Node_MakeStruct_InteractionUIContext, const struct FInteractionUIContext& K2Node_MakeStruct_InteractionUIContext_1, bool CallFunc_IsInAnyDeathState_ReturnValue, class UPlayerInteractionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FInteractionData& CallFunc_TraceForTargetDataForInteractionDisplay_OutInteractionData, bool CallFunc_TraceForTargetDataForInteractionDisplay_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Update Interact");

	Params::ABP_PlayerController_C_Update_Interact_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.InteractionData = InteractionData;
	Parms.ControllingPawnInteractionComponent = ControllingPawnInteractionComponent;
	Parms.PlayerCharacter = PlayerCharacter;
	Parms.ActorsToIgnore = ActorsToIgnore;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager_1 = CallFunc_Get_HUD_Manager_HUD_Manager_1;
	Parms.K2Node_MakeStruct_InteractionUIContext = K2Node_MakeStruct_InteractionUIContext;
	Parms.K2Node_MakeStruct_InteractionUIContext_1 = K2Node_MakeStruct_InteractionUIContext_1;
	Parms.CallFunc_IsInAnyDeathState_ReturnValue = CallFunc_IsInAnyDeathState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_TraceForTargetDataForInteractionDisplay_OutInteractionData = CallFunc_TraceForTargetDataForInteractionDisplay_OutInteractionData;
	Parms.CallFunc_TraceForTargetDataForInteractionDisplay_ReturnValue = CallFunc_TraceForTargetDataForInteractionDisplay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.AttemptReadyConnection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD_CommonNWX_C*            K2Node_DynamicCast_AsHUD_Common_NWX                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::AttemptReadyConnection(class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, class AHUD_CommonNWX_C* K2Node_DynamicCast_AsHUD_Common_NWX, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "AttemptReadyConnection");

	Params::ABP_PlayerController_C_AttemptReadyConnection_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;
	Parms.K2Node_DynamicCast_AsHUD_Common_NWX = K2Node_DynamicCast_AsHUD_Common_NWX;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.GateReadyConnection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetGateOpen                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::GateReadyConnection(bool SetGateOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GateReadyConnection");

	Params::ABP_PlayerController_C_GateReadyConnection_Params Parms{};

	Parms.SetGateOpen = SetGateOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.GetPlayerControllerByPlayerName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      PlayerController                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      LocalPlayerController                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerStateByPlayerName_Player_State                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::GetPlayerControllerByPlayerName(const class FString& PlayerName, class ABP_PlayerController_C** PlayerController, class ABP_PlayerController_C* LocalPlayerController, class APlayerState* CallFunc_GetPlayerStateByPlayerName_Player_State, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetPlayerControllerByPlayerName");

	Params::ABP_PlayerController_C_GetPlayerControllerByPlayerName_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.LocalPlayerController = LocalPlayerController;
	Parms.CallFunc_GetPlayerStateByPlayerName_Player_State = CallFunc_GetPlayerStateByPlayerName_Player_State;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Function BP_PlayerController.BP_PlayerController_C.GetPlayerStateByPlayerName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               OnlineOnly                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                Player_State                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                LocalPlayerState                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::GetPlayerStateByPlayerName(const class FString& PlayerName, bool OnlineOnly, class APlayerState** Player_State, class APlayerState* LocalPlayerState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GetPlayerStateByPlayerName");

	Params::ABP_PlayerController_C_GetPlayerStateByPlayerName_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.OnlineOnly = OnlineOnly;
	Parms.LocalPlayerState = LocalPlayerState;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_State != nullptr)
		*Player_State = Parms.Player_State;

}


// Function BP_PlayerController.BP_PlayerController_C.SimulatePlayerMovement
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::SimulatePlayerMovement(class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "SimulatePlayerMovement");

	Params::ABP_PlayerController_C_SimulatePlayerMovement_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_InputAction_DB_ToggleSimulatePlayerMovement_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::InpActEvt_InputAction_DB_ToggleSimulatePlayerMovement_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "InpActEvt_InputAction_DB_ToggleSimulatePlayerMovement_K2Node_EnhancedInputActionEvent_0");

	Params::ABP_PlayerController_C_InpActEvt_InputAction_DB_ToggleSimulatePlayerMovement_K2Node_EnhancedInputActionEvent_0_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.GameStateReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::GameStateReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GameStateReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowingHUD                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::DisplayHUD(bool ShowingHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayHUD");

	Params::ABP_PlayerController_C_DisplayHUD_Params Parms{};

	Parms.ShowingHUD = ShowingHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.CreateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            PlayerCamera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             IconDistance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::CreateMarker(class AActor* ActorToMark, class ACharacter* PlayerCharacter, class UCameraComponent* PlayerCamera, const struct FLinearColor& Colour, double IconDistance, const struct FDataTableRowHandle& Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "CreateMarker");

	Params::ABP_PlayerController_C_CreateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.PlayerCharacter = PlayerCharacter;
	Parms.PlayerCamera = PlayerCamera;
	Parms.Colour = Colour;
	Parms.IconDistance = IconDistance;
	Parms.Row = Row;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.RemoveMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::RemoveMarker(class AActor* ActorToMark)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "RemoveMarker");

	Params::ABP_PlayerController_C_RemoveMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.UpdateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToMark                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             MarkerPrecision                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ParticlesVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ParticlesColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::UpdateMarker(class AActor* ActorToMark, double MarkerPrecision, bool ParticlesVisible, const struct FLinearColor& ParticlesColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "UpdateMarker");

	Params::ABP_PlayerController_C_UpdateMarker_Params Parms{};

	Parms.ActorToMark = ActorToMark;
	Parms.MarkerPrecision = MarkerPrecision;
	Parms.ParticlesVisible = ParticlesVisible;
	Parms.ParticlesColor = ParticlesColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayCompass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayFX                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::DisplayCompass(bool bVisible, bool PlayFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayCompass");

	Params::ABP_PlayerController_C_DisplayCompass_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.PlayFX = PlayFX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     Quest_Notificator_Info                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               DisplayToolTip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ToolTipIcon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ToolTipText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ToolTipOnly                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::DisplayQuestNotification(double DisplayTime, const struct FS_QuestNotificatorInfo& Quest_Notificator_Info, bool DisplayToolTip, class UObject* ToolTipIcon, class FText ToolTipText, bool ToolTipOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayQuestNotification");

	Params::ABP_PlayerController_C_DisplayQuestNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Quest_Notificator_Info = Quest_Notificator_Info;
	Parms.DisplayToolTip = DisplayToolTip;
	Parms.ToolTipIcon = ToolTipIcon;
	Parms.ToolTipText = ToolTipText;
	Parms.ToolTipOnly = ToolTipOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FLinearColor                BackgroundColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::DisplayIngameTutorial(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2, const struct FLinearColor& BackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayIngameTutorial");

	Params::ABP_PlayerController_C_DisplayIngameTutorial_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;
	Parms.BackgroundColor = BackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CrosshairTypes        Crosshair_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CrosshairVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Crosshair_Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     HitIndicator_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HitIndicatorVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::DisplayCrosshair(enum class E_CrosshairTypes Crosshair_Type, bool CrosshairVisibility, const struct FLinearColor& Crosshair_Color, enum class E_HitIndicatorTypes HitIndicator_Type, bool HitIndicatorVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayCrosshair");

	Params::ABP_PlayerController_C_DisplayCrosshair_Params Parms{};

	Parms.Crosshair_Type = Crosshair_Type;
	Parms.CrosshairVisibility = CrosshairVisibility;
	Parms.Crosshair_Color = Crosshair_Color;
	Parms.HitIndicator_Type = HitIndicator_Type;
	Parms.HitIndicatorVisibility = HitIndicatorVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IndicatorTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                IndicatorColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               Hit_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::DisplayHitIndicator(double IndicatorTime, const struct FLinearColor& IndicatorColor, enum class E_HitType Hit_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayHitIndicator");

	Params::ABP_PlayerController_C_DisplayHitIndicator_Params Parms{};

	Parms.IndicatorTime = IndicatorTime;
	Parms.IndicatorColor = IndicatorColor;
	Parms.Hit_Type = Hit_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.RemoveQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::RemoveQuestNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "RemoveQuestNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRecoil                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::DisplayRecoil(bool IsRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayRecoil");

	Params::ABP_PlayerController_C_DisplayRecoil_Params Parms{};

	Parms.IsRecoil = IsRecoil;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplaySingleRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::DisplaySingleRecoil()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplaySingleRecoil");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BigLootNotificationInfo  Big_Loot_Notify_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::DisplayBigLootNotification(const struct FS_BigLootNotificationInfo& Big_Loot_Notify_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayBigLootNotification");

	Params::ABP_PlayerController_C_DisplayBigLootNotification_Params Parms{};

	Parms.Big_Loot_Notify_Info = Big_Loot_Notify_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.RemoveBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::RemoveBigLootNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "RemoveBigLootNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_IngameTutorial           Row2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::DisplayToolTip(double DisplayTime, const struct FS_IngameTutorial& Row1, const struct FS_IngameTutorial& Row2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayToolTip");

	Params::ABP_PlayerController_C_DisplayToolTip_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.Row1 = Row1;
	Parms.Row2 = Row2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.RemoveToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::RemoveToolTip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "RemoveToolTip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TypeText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        HeadlineText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::DisplayGlobalNotification(double DisplayTime, class FText TypeText, class FText HeadlineText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayGlobalNotification");

	Params::ABP_PlayerController_C_DisplayGlobalNotification_Params Parms{};

	Parms.DisplayTime = DisplayTime;
	Parms.TypeText = TypeText;
	Parms.HeadlineText = HeadlineText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.RemoveGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::RemoveGlobalNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "RemoveGlobalNotification");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.CrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::CrosshairVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "CrosshairVisibility");

	Params::ABP_PlayerController_C_CrosshairVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_FocusChatInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::HUD_FocusChatInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_FocusChatInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_InputChatCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::HUD_InputChatCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_InputChatCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_Message_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ChatMessage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_Message_SendToServer(const class FString& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_Message_SendToServer");

	Params::ABP_PlayerController_C_Chat_Message_SendToServer_Params Parms{};

	Parms.ChatMessage = ChatMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_Message_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ChatMessage              ChatMessageS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_Message_ReceiveFromServer(const struct FS_ChatMessage& ChatMessageS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_Message_ReceiveFromServer");

	Params::ABP_PlayerController_C_Chat_Message_ReceiveFromServer_Params Parms{};

	Parms.ChatMessageS = ChatMessageS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_LeaveChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_LeaveChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_LeaveChannel");

	Params::ABP_PlayerController_C_Chat_LeaveChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_JoinChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChannelID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_JoinChannel(int32 ChannelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_JoinChannel");

	Params::ABP_PlayerController_C_Chat_JoinChannel_Params Parms{};

	Parms.ChannelID = ChannelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_PM_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_PM_SendToServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_PM_SendToServer");

	Params::ABP_PlayerController_C_Chat_PM_SendToServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_PM_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_PM_ReceiveFromServer(int32 PlayerId, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_PM_ReceiveFromServer");

	Params::ABP_PlayerController_C_Chat_PM_ReceiveFromServer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_SetStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Away                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_SetStatus(bool Away)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_SetStatus");

	Params::ABP_PlayerController_C_Chat_SetStatus_Params Parms{};

	Parms.Away = Away;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_ServerCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_ServerCommand(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_ServerCommand");

	Params::ABP_PlayerController_C_Chat_ServerCommand_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_Yell_SendToServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_Yell_SendToServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_Yell_SendToServer");

	Params::ABP_PlayerController_C_Chat_Yell_SendToServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Chat_Yell_ReceiveFromServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Chat_Yell_ReceiveFromServer(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Chat_Yell_ReceiveFromServer");

	Params::ABP_PlayerController_C_Chat_Yell_ReceiveFromServer_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Crosshair_ShowReloadText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Crosshair_ShowReloadText(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Crosshair_ShowReloadText");

	Params::ABP_PlayerController_C_Crosshair_ShowReloadText_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Crosshair_UpdateReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Crosshair_UpdateReload(double Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Crosshair_UpdateReload");

	Params::ABP_PlayerController_C_Crosshair_UpdateReload_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ShowSpyglass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ShowSpyglass(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ShowSpyglass");

	Params::ABP_PlayerController_C_ShowSpyglass_Params Parms{};

	Parms.Show_ = Show_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_UpdateInteractText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionUIContext       InteractionContext                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerController_C::HUD_UpdateInteractText(struct FInteractionUIContext& InteractionContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_UpdateInteractText");

	Params::ABP_PlayerController_C_HUD_UpdateInteractText_Params Parms{};

	Parms.InteractionContext = InteractionContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_DisplayApexCreature_BossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Display_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_DisplayApexCreature_BossBar(bool Display_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_DisplayApexCreature_BossBar");

	Params::ABP_PlayerController_C_HUD_DisplayApexCreature_BossBar_Params Parms{};

	Parms.Display_ = Display_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_UpdateBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Whatever_                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::HUD_UpdateBossBar(const class FString& Bar_Label, class FText Whatever_, double Health, class FText Bar_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_UpdateBossBar");

	Params::ABP_PlayerController_C_HUD_UpdateBossBar_Params Parms{};

	Parms.Bar_Label = Bar_Label;
	Parms.Whatever_ = Whatever_;
	Parms.Health = Health;
	Parms.Bar_Header = Bar_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_AddNewBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Progress_Bar_Tint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    Progress_Bar_Direction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Bar_Label                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Bar_Header                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Bar_Sub_Header                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::HUD_AddNewBossBar(const struct FLinearColor& Progress_Bar_Tint, enum class EProgressBarFillType Progress_Bar_Direction, const class FString& Bar_Label, class FText Bar_Header, class FText Bar_Sub_Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_AddNewBossBar");

	Params::ABP_PlayerController_C_HUD_AddNewBossBar_Params Parms{};

	Parms.Progress_Bar_Tint = Progress_Bar_Tint;
	Parms.Progress_Bar_Direction = Progress_Bar_Direction;
	Parms.Bar_Label = Bar_Label;
	Parms.Bar_Header = Bar_Header;
	Parms.Bar_Sub_Header = Bar_Sub_Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_RemoveBossBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_RemoveBossBar(const class FString& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_RemoveBossBar");

	Params::ABP_PlayerController_C_HUD_RemoveBossBar_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_Damage_CreateIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEffectContextData    DamageContextData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Damage_Intensity__Amount_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_Damage_CreateIndicator(const struct FDamageEffectContextData& DamageContextData, double Time_to_Display, double Damage_Intensity__Amount_, const struct FLinearColor& Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_Damage_CreateIndicator");

	Params::ABP_PlayerController_C_HUD_Damage_CreateIndicator_Params Parms{};

	Parms.DamageContextData = DamageContextData;
	Parms.Time_to_Display = Time_to_Display;
	Parms.Damage_Intensity__Amount_ = Damage_Intensity__Amount_;
	Parms.Colour = Colour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_UpdateActionProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_UpdateActionProgressBar(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_UpdateActionProgressBar");

	Params::ABP_PlayerController_C_HUD_UpdateActionProgressBar_Params Parms{};

	Parms.Visible = Visible;
	Parms.CurrentProgress = CurrentProgress;
	Parms.Label = Label;
	Parms.ShowImage = ShowImage;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_ChangeHudMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UI_HUD_Modes          HUD_Mode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_ChangeHudMode(enum class E_UI_HUD_Modes HUD_Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_ChangeHudMode");

	Params::ABP_PlayerController_C_HUD_ChangeHudMode_Params Parms{};

	Parms.HUD_Mode = HUD_Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayEncounterUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IEncounterUIDataInterface>EncounterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      EncounterMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::DisplayEncounterUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& EncounterMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayEncounterUpdate");

	Params::ABP_PlayerController_C_DisplayEncounterUpdate_Params Parms{};

	Parms.EncounterData = EncounterData;
	Parms.EncounterMessage = EncounterMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_SetRealmStartTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             RealmStartTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_SetRealmStartTime(double RealmStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_SetRealmStartTime");

	Params::ABP_PlayerController_C_HUD_SetRealmStartTime_Params Parms{};

	Parms.RealmStartTime = RealmStartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Crosshair_UpdateWeaponSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spread                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Crosshair_UpdateWeaponSpread(double Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Crosshair_UpdateWeaponSpread");

	Params::ABP_PlayerController_C_Crosshair_UpdateWeaponSpread_Params Parms{};

	Parms.Spread = Spread;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ShowContextualControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   ContextualControlsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ShowContextualControls(bool IsVisible, const struct FS_ContextualControlsData& ContextualControlsData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ShowContextualControls");

	Params::ABP_PlayerController_C_ShowContextualControls_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.ContextualControlsData = ContextualControlsData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_Encounter_MiniMessage_Timed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      Message_Content                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_Encounter_MiniMessage_Timed(const struct FNotificationEncounter& Message_Content, double TimeToDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_Encounter_MiniMessage_Timed");

	Params::ABP_PlayerController_C_HUD_Encounter_MiniMessage_Timed_Params Parms{};

	Parms.Message_Content = Message_Content;
	Parms.TimeToDisplay = TimeToDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_Encounter_MiniMessage_Pinned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotificationEncounter      MessageContent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Pin_or_Unpin__Pin_true_will_add_                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_Encounter_MiniMessage_Pinned(const struct FNotificationEncounter& MessageContent, bool Pin_or_Unpin__Pin_true_will_add_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_Encounter_MiniMessage_Pinned");

	Params::ABP_PlayerController_C_HUD_Encounter_MiniMessage_Pinned_Params Parms{};

	Parms.MessageContent = MessageContent;
	Parms.Pin_or_Unpin__Pin_true_will_add_ = Pin_or_Unpin__Pin_true_will_add_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_GeneralNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Remove_Manually                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Time_to_Display                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_GeneralNotification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manually, double Time_to_Display)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_GeneralNotification");

	Params::ABP_PlayerController_C_HUD_GeneralNotification_Params Parms{};

	Parms.Content = Content;
	Parms.Remove_Manually = Remove_Manually;
	Parms.Time_to_Display = Time_to_Display;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_StatusEffect_TextNotificationUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ManuallyRemove_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::HUD_StatusEffect_TextNotificationUpdate(bool ManuallyRemove_, double TimeToDisplay, const struct FS_UpdaterNotificatorInfo& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_StatusEffect_TextNotificationUpdate");

	Params::ABP_PlayerController_C_HUD_StatusEffect_TextNotificationUpdate_Params Parms{};

	Parms.ManuallyRemove_ = ManuallyRemove_;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.HUD_StatusEffect_TextNotification_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::HUD_StatusEffect_TextNotification_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "HUD_StatusEffect_TextNotification_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.UI_Spyglass_AdjustZoomLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::UI_Spyglass_AdjustZoomLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "UI_Spyglass_AdjustZoomLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.UI_VFX_CraftingSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::UI_VFX_CraftingSuccess(const struct FVector& Location, enum class EItemQuality Quality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "UI_VFX_CraftingSuccess");

	Params::ABP_PlayerController_C_UI_VFX_CraftingSuccess_Params Parms{};

	Parms.Location = Location;
	Parms.Quality = Quality;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.UI_VFX_CC_ChangeCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::UI_VFX_CC_ChangeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "UI_VFX_CC_ChangeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.DisplayErrorNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MainText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::DisplayErrorNotification(class FText MainText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DisplayErrorNotification");

	Params::ABP_PlayerController_C_DisplayErrorNotification_Params Parms{};

	Parms.MainText = MainText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.FadeToBlack_andBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToStayBlack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::FadeToBlack_andBack(double TimeToStayBlack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "FadeToBlack_andBack");

	Params::ABP_PlayerController_C_FadeToBlack_andBack_Params Parms{};

	Parms.TimeToStayBlack = TimeToStayBlack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.FadeToBlack_Manual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               To_Black_true__From_Black__False                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::FadeToBlack_Manual(bool To_Black_true__From_Black__False)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "FadeToBlack_Manual");

	Params::ABP_PlayerController_C_FadeToBlack_Manual_Params Parms{};

	Parms.To_Black_true__From_Black__False = To_Black_true__From_Black__False;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.BuildUX_Feedback_Invalid_Intersecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback_CollisionFeedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ABP_PlayerController_C::BuildUX_Feedback_Invalid_Intersecting(const struct FStructurePlacementFeedback_Collision& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "BuildUX_Feedback_Invalid_Intersecting");

	Params::ABP_PlayerController_C_BuildUX_Feedback_Invalid_Intersecting_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.BuildUX_Feedback_Invalid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructurePlacementFeedback Feedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ABP_PlayerController_C::BuildUX_Feedback_Invalid(const struct FStructurePlacementFeedback& Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "BuildUX_Feedback_Invalid");

	Params::ABP_PlayerController_C_BuildUX_Feedback_Invalid_Params Parms{};

	Parms.Feedback = Feedback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.BuildUX_Feedback_RotationControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRotate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentRotation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::BuildUX_Feedback_RotationControls(bool CanRotate, double CurrentRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "BuildUX_Feedback_RotationControls");

	Params::ABP_PlayerController_C_BuildUX_Feedback_RotationControls_Params Parms{};

	Parms.CanRotate = CanRotate;
	Parms.CurrentRotation = CurrentRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.BuildUX_Feedback_HeightControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanAdjustHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Current                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Max                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Height_Min                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::BuildUX_Feedback_HeightControls(bool CanAdjustHeight, double Height_Current, double Height_Max, double Height_Min)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "BuildUX_Feedback_HeightControls");

	Params::ABP_PlayerController_C_BuildUX_Feedback_HeightControls_Params Parms{};

	Parms.CanAdjustHeight = CanAdjustHeight;
	Parms.Height_Current = Height_Current;
	Parms.Height_Max = Height_Max;
	Parms.Height_Min = Height_Min;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ClearNotificationCardQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::ClearNotificationCardQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ClearNotificationCardQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.UpdateNextNotificationCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::UpdateNextNotificationCard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "UpdateNextNotificationCard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.SendInteractionToLocalClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_ControllerClientInteractable_C>InteractionObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::SendInteractionToLocalClient(TScriptInterface<class IBPI_ControllerClientInteractable_C> InteractionObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "SendInteractionToLocalClient");

	Params::ABP_PlayerController_C_SendInteractionToLocalClient_Params Parms{};

	Parms.InteractionObject = InteractionObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Client_LocalControllerInteract
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InteractionObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Client_LocalControllerInteract(class UObject* InteractionObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Client_LocalControllerInteract");

	Params::ABP_PlayerController_C_Client_LocalControllerInteract_Params Parms{};

	Parms.InteractionObject = InteractionObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteAbilityOnTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionTypes       InputActionType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ExecuteAbilityOnTarget(enum class EInputActionTypes InputActionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ExecuteAbilityOnTarget");

	Params::ABP_PlayerController_C_ExecuteAbilityOnTarget_Params Parms{};

	Parms.InputActionType = InputActionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OnInteractButtonHeldDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                Input_Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnInteractButtonHeldDown(class UInputAction* Input_Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnInteractButtonHeldDown");

	Params::ABP_PlayerController_C_OnInteractButtonHeldDown_Params Parms{};

	Parms.Input_Action = Input_Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ReleaseInputOnTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionTypes       ReleaseActionType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ReleaseInputOnTarget(enum class EInputActionTypes ReleaseActionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ReleaseInputOnTarget");

	Params::ABP_PlayerController_C_ReleaseInputOnTarget_Params Parms{};

	Parms.ReleaseActionType = ReleaseActionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OpenFeedbackReport_FromUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::OpenFeedbackReport_FromUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OpenFeedbackReport_FromUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.SetBuildModeFeedbackMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBuildModeContext       Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::SetBuildModeFeedbackMode(enum class EBuildModeContext Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "SetBuildModeFeedbackMode");

	Params::ABP_PlayerController_C_SetBuildModeFeedbackMode_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.SetBuildModeFeedbackActionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBuildModeAction        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::SetBuildModeFeedbackActionEnabled(enum class EBuildModeAction Action, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "SetBuildModeFeedbackActionEnabled");

	Params::ABP_PlayerController_C_SetBuildModeFeedbackActionEnabled_Params Parms{};

	Parms.Action = Action;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.PrimaryPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::PrimaryPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "PrimaryPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.PrimaryReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::PrimaryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "PrimaryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.SecondaryPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::SecondaryPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "SecondaryPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.SecondaryReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::SecondaryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "SecondaryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Ability1Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Ability1Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Ability1Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Ability1Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Ability1Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Ability1Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Ability2Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Ability2Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Ability2Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Ability2Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Ability2Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Ability2Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Ability3Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Ability3Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Ability3Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Ability3Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Ability3Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Ability3Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Server_ItemHoover
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Server_ItemHoover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server_ItemHoover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ReceivePossess");

	Params::ABP_PlayerController_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.BP_OnRep_Pawn
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::BP_OnRep_Pawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "BP_OnRep_Pawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.ServerDebugSetTimeOfDay
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Hour                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ServerDebugSetTimeOfDay(int32 Hour, int32 Min)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ServerDebugSetTimeOfDay");

	Params::ABP_PlayerController_C_ServerDebugSetTimeOfDay_Params Parms{};

	Parms.Hour = Hour;
	Parms.Min = Min;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ClientDebugSetTimeOfDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Hour                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ClientDebugSetTimeOfDay(int32 Hour, int32 Min)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ClientDebugSetTimeOfDay");

	Params::ABP_PlayerController_C_ClientDebugSetTimeOfDay_Params Parms{};

	Parms.Hour = Hour;
	Parms.Min = Min;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.QuickDamageServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::QuickDamageServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "QuickDamageServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.UI_DB_SpawnCreature
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CreatureToSpawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              HowMany_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Stationary_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Immortal_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::UI_DB_SpawnCreature(const class FString& CreatureToSpawn, int32 HowMany_, bool Stationary_, bool Immortal_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "UI_DB_SpawnCreature");

	Params::ABP_PlayerController_C_UI_DB_SpawnCreature_Params Parms{};

	Parms.CreatureToSpawn = CreatureToSpawn;
	Parms.HowMany_ = HowMany_;
	Parms.Stationary_ = Stationary_;
	Parms.Immortal_ = Immortal_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Debug_MoveCharacter
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DestLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::Debug_MoveCharacter(const struct FVector& DestLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Debug_MoveCharacter");

	Params::ABP_PlayerController_C_Debug_MoveCharacter_Params Parms{};

	Parms.DestLocation = DestLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Debug_KillPlayer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Debug_KillPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Debug_KillPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.GrantLoadout
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLoadoutDataReference Loadout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerController_C::GrantLoadout(const struct FPlayerLoadoutDataReference& Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "GrantLoadout");

	Params::ABP_PlayerController_C_GrantLoadout_Params Parms{};

	Parms.Loadout = Loadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.UnlockMap
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::UnlockMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "UnlockMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Server_AddGodMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Server_AddGodMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server_AddGodMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Server_RemoveGodMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Server_RemoveGodMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server_RemoveGodMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Server_ToggleGodMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Server_ToggleGodMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server_ToggleGodMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Server_DebugRevivePlayer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Server_DebugRevivePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server_DebugRevivePlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Server_KillSelf
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Server_KillSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server_KillSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Server_RespawnSelf
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Server_RespawnSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server_RespawnSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.DB_ToggleSimulatePlayerMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::DB_ToggleSimulatePlayerMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DB_ToggleSimulatePlayerMovement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.DB_Camera_PiP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::DB_Camera_PiP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "DB_Camera_PiP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.OpenDevDebugMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::OpenDevDebugMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OpenDevDebugMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::CustomEvent(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "CustomEvent");

	Params::ABP_PlayerController_C_CustomEvent_Params Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Server_MoveCharacterToBetterSpot
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Server_MoveCharacterToBetterSpot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server_MoveCharacterToBetterSpot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.Server_MoveCharacterToRespite
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::Server_MoveCharacterToRespite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server_MoveCharacterToRespite");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.ShowGeneralNotification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Header                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ShowGeneralNotification(class FText Header, class FText Body, double Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ShowGeneralNotification");

	Params::ABP_PlayerController_C_ShowGeneralNotification_Params Parms{};

	Parms.Header = Header;
	Parms.Body = Body;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ShowErrorNotification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MainText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::ShowErrorNotification(class FText MainText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ShowErrorNotification");

	Params::ABP_PlayerController_C_ShowErrorNotification_Params Parms{};

	Parms.MainText = MainText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ToggleHUDVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::ToggleHUDVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ToggleHUDVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.AddUI_FromWorldInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UNWXCommonWindowWidget>WidgetToOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PlayerController_C::AddUI_FromWorldInteraction(TSubclassOf<class UNWXCommonWindowWidget> WidgetToOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "AddUI_FromWorldInteraction");

	Params::ABP_PlayerController_C_AddUI_FromWorldInteraction_Params Parms{};

	Parms.WidgetToOpen = WidgetToOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ReceiveTick");

	Params::ABP_PlayerController_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.TeleportPlayer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::TeleportPlayer(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "TeleportPlayer");

	Params::ABP_PlayerController_C_TeleportPlayer_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OnBroadcastClientReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::OnBroadcastClientReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnBroadcastClientReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.OnBindReadyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GameState_C*             GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnBindReadyEvent(class ABP_GameState_C* GameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnBindReadyEvent");

	Params::ABP_PlayerController_C_OnBindReadyEvent_Params Parms{};

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.TriggerRebuildLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::TriggerRebuildLoadout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "TriggerRebuildLoadout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.OnLoadoutComponentReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnLoadoutComponentReady(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnLoadoutComponentReady");

	Params::ABP_PlayerController_C_OnLoadoutComponentReady_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Client_FastTravelToMapPinLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinData                 MapPinData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerController_C::Client_FastTravelToMapPinLocation(struct FMapPinData& MapPinData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Client_FastTravelToMapPinLocation");

	Params::ABP_PlayerController_C_Client_FastTravelToMapPinLocation_Params Parms{};

	Parms.MapPinData = MapPinData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.Server Fast Travel to Map Pin Location
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinData                 MapPinData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::Server_Fast_Travel_to_Map_Pin_Location(const struct FMapPinData& MapPinData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "Server Fast Travel to Map Pin Location");

	Params::ABP_PlayerController_C_Server_Fast_Travel_to_Map_Pin_Location_Params Parms{};

	Parms.MapPinData = MapPinData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.SetBuildingFeedbackMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBuildModeContext       Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::SetBuildingFeedbackMode(enum class EBuildModeContext Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "SetBuildingFeedbackMode");

	Params::ABP_PlayerController_C_SetBuildingFeedbackMode_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShowingHUD                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark_2                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_PlayerCharacter                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            K2Node_Event_PlayerCamera                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Colour_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_IconDistance                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_Row                                                 (NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToMark                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_MarkerPrecision                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ParticlesVisible                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_ParticlesColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PlayFX                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_QuestNotificatorInfo     K2Node_Event_Quest_Notificator_Info                              (HasGetValueTypeHash)
// bool                               K2Node_Event_DisplayToolTip                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ToolTipIcon                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ToolTipText                                         (None)
// bool                               K2Node_Event_ToolTipOnly                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row1_1                                              (HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row2_1                                              (HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_BackgroundColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CrosshairTypes        K2Node_Event_Crosshair_Type                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CrosshairVisibility                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Crosshair_Color                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitIndicatorTypes     K2Node_Event_HitIndicator_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_HitIndicatorVisibility                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_IndicatorTime                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_IndicatorColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               K2Node_Event_Hit_Type                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsRecoil                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BigLootNotificationInfo  K2Node_Event_Big_Loot_Notify_Info                                (HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row1                                                (HasGetValueTypeHash)
// struct FS_IngameTutorial           K2Node_Event_Row2                                                (HasGetValueTypeHash)
// double                             K2Node_Event_DisplayTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_TypeText                                            (None)
// class FText                        K2Node_Event_HeadlineText                                        (None)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_ChatMessage                                         (ZeroConstructor, HasGetValueTypeHash)
// struct FS_ChatMessage              K2Node_Event_ChatMessageS                                        (HasGetValueTypeHash)
// int32                              K2Node_Event_ChannelID_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ChannelID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerID_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_4                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PlayerID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_3                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Away                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_message                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Time                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show_                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionUIContext       K2Node_Event_InteractionContext                                  (ConstParm)
// bool                               K2Node_Event_Display_                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Bar_Label_1                                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_            (None)
// double                             K2Node_Event_Health                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Bar_Header_1                                        (None)
// struct FLinearColor                K2Node_Event_Progress_Bar_Tint                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_Event_Progress_Bar_Direction                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Bar_Label                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Bar_Header                                          (None)
// class FText                        K2Node_Event_Bar_Sub_Header                                      (None)
// class FString                      K2Node_Event_Label_1                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FDamageEffectContextData    K2Node_Event_DamageContextData                                   (None)
// double                             K2Node_Event_Time_to_Display_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Damage_Intensity__Amount_                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Colour                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Visible                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentProgress                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Label                                               (None)
// bool                               K2Node_Event_ShowImage                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_Image                                               (HasGetValueTypeHash)
// enum class E_UI_HUD_Modes          K2Node_Event_HUD_Mode                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterUIDataInterface>K2Node_Event_EncounterData                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_EncounterMessage                                    (None)
// double                             K2Node_Event_RealmStartTime                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Spread                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsVisible                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContextualControlsData   K2Node_Event_ContextualControlsData                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_Message_Content                                     (None)
// double                             K2Node_Event_TimeToDisplay_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_Event_MessageContent                                      (None)
// bool                               K2Node_Event_Pin_or_Unpin__Pin_true_will_add_                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_Event_Content_1                                           (HasGetValueTypeHash)
// bool                               K2Node_Event_Remove_Manually                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Time_to_Display                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ManuallyRemove_                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_TimeToDisplay                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_Event_Content                                             (HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Location                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            K2Node_Event_Quality                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_MainText                                            (None)
// class FText                        K2Node_Event_BodyText                                            (None)
// double                             K2Node_Event_TimeToStayBlack                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_To_Black_true__From_Black__False                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback_CollisionK2Node_Event_Feedback_1                                          (ContainsInstancedReference)
// struct FStructurePlacementFeedback K2Node_Event_Feedback                                            (ContainsInstancedReference)
// bool                               K2Node_Event_CanRotate                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentRotation                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CanAdjustHeight                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Current                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Max                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Height_Min                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ControllerClientInteractable_C>K2Node_CustomEvent_InteractionObject_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_InteractionObject                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ControllerClientInteractable_C>K2Node_DynamicCast_AsBPI_Controller_Client_Interactable          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionTypes       K2Node_CustomEvent_InputActionType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_CustomEvent_Input_Action                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionTypes       K2Node_CustomEvent_ReleaseActionType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionComponent_C*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EBuildModeContext       K2Node_Event_Mode_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildModeFeedbackComponent_C*CallFunc_GetBuildModeFeedbackComponent_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EBuildModeAction        K2Node_Event_Action                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Enabled                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildModeFeedbackComponent_C*CallFunc_GetBuildModeFeedbackComponent_Component_1               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenusComponent*             CallFunc_GetMenusComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>CallFunc_CacheAndGetBuildingObject_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsBuilding_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlacing_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>CallFunc_CacheAndGetBuildingObject_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlacing_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBuilding_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          Temp_struct_Variable_3                                           (ConstParm)
// struct FHitResult                  Temp_struct_Variable_4                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          Temp_struct_Variable_5                                           (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_6                                           (ConstParm, ReferenceParm)
// int32                              K2Node_CustomEvent_Hour_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Min_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Hour                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Min                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXCheatManager*            K2Node_DynamicCast_AsNWXCheat_Manager                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageEventInterface>K2Node_DynamicCast_AsDamage_Event_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_CreatureToSpawn                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HowMany_                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Stationary_                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Immortal_                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_DestLocation                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_6                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TeleportTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_7                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageEventInterface>K2Node_DynamicCast_AsDamage_Event_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_8                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerLoadoutDataReference K2Node_CustomEvent_Loadout                                       (HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable_7                                           (ConstParm)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable_8                                           (ConstParm)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable_9                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_9                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_10                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_11                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GodModeTag_GodModeTag                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GodModeTag_GodModeTag_1                                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GodModeTag_GodModeTag_2                                 (NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          Temp_struct_Variable_10                                          (ConstParm)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MapTracker_C*            CallFunc_GetMapTracker_MapTrackerComponent                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILocationTrackerInterface>CallFunc_Server_DebugShowAndUnlockAllMapPins_self_CastInput      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_12                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_13                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_14                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_11                                          (ConstParm, ReferenceParm)
// class ANWXActor*                   CallFunc_GetDamageSource_Debug_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXActor*                   CallFunc_GetDamageSource_Debug_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags_1                      (None)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXActor*                   CallFunc_GetDamageSource_Debug_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageEventInterface>CallFunc_DamageActor_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags_2                      (None)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DebugMenuScreen_C*      CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*K2Node_CustomEvent_QueryInstance                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         K2Node_CustomEvent_QueryStatus                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_15                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentRealmSettings_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              CallFunc_GetCurrentRealmSettings_RealmSettings                   (None)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_16                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DebugThirdPersonCameraWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetRespitePoint_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue                      (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction                     (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Header                                        (None)
// class FText                        K2Node_CustomEvent_Body                                          (None)
// double                             K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UpdaterNotificatorInfo   K2Node_MakeStruct_S_UpdaterNotificatorInfo                       (HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_12                                          (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AHUD_NWX_C*                  K2Node_DynamicCast_AsHUD_NWX                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_MainText                                      (None)
// class FText                        K2Node_CustomEvent_BodyText                                      (None)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UNWXCommonWindowWidget>K2Node_Event_WidgetToOpen                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_17                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TeleportTo_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_CustomEvent_GameState                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelFastTravelLocation  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FString                      CallFunc_Break_LevelFastTravelLocation_Level_Name                (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelInformation>CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information   (ReferenceParm)
// struct FS_FastTravelInformation    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelInformation_ID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelInformation_Fast_Travel_Location_State  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Discover_Fast_Travel_Location_Success                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreTestsRunning_AreTestsRunning                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreTestsRunning_AreTestsRunning_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInitialized_bInitialized                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapPinData                 K2Node_Event_MapPinData                                          (ConstParm)
// struct FMapPinData                 K2Node_CustomEvent_MapPinData                                    (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayInEditor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInitialInventoryReceived_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEnvQuery*                   Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildModeContext       K2Node_Event_Mode                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQuery*                   Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQuery*                   K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int32 EntryPoint, double Temp_real_Variable, bool K2Node_Event_ShowingHUD, class AActor* K2Node_Event_ActorToMark_2, class ACharacter* K2Node_Event_PlayerCharacter, class UCameraComponent* K2Node_Event_PlayerCamera, const struct FLinearColor& K2Node_Event_Colour_1, double K2Node_Event_IconDistance, const struct FDataTableRowHandle& K2Node_Event_Row, class AActor* K2Node_Event_ActorToMark_1, class AActor* K2Node_Event_ActorToMark, double K2Node_Event_MarkerPrecision, bool K2Node_Event_ParticlesVisible, const struct FLinearColor& K2Node_Event_ParticlesColor, bool K2Node_Event_bVisible_1, bool K2Node_Event_PlayFX, double K2Node_Event_DisplayTime_3, const struct FS_QuestNotificatorInfo& K2Node_Event_Quest_Notificator_Info, bool K2Node_Event_DisplayToolTip, class UObject* K2Node_Event_ToolTipIcon, class FText K2Node_Event_ToolTipText, bool K2Node_Event_ToolTipOnly, double K2Node_Event_DisplayTime_2, const struct FS_IngameTutorial& K2Node_Event_Row1_1, const struct FS_IngameTutorial& K2Node_Event_Row2_1, const struct FLinearColor& K2Node_Event_BackgroundColor, enum class E_CrosshairTypes K2Node_Event_Crosshair_Type, bool K2Node_Event_CrosshairVisibility, const struct FLinearColor& K2Node_Event_Crosshair_Color, enum class E_HitIndicatorTypes K2Node_Event_HitIndicator_Type, bool K2Node_Event_HitIndicatorVisibility, double K2Node_Event_IndicatorTime, const struct FLinearColor& K2Node_Event_IndicatorColor, enum class E_HitType K2Node_Event_Hit_Type, bool K2Node_Event_IsRecoil, const struct FS_BigLootNotificationInfo& K2Node_Event_Big_Loot_Notify_Info, double K2Node_Event_DisplayTime_1, const struct FS_IngameTutorial& K2Node_Event_Row1, const struct FS_IngameTutorial& K2Node_Event_Row2, double K2Node_Event_DisplayTime, class FText K2Node_Event_TypeText, class FText K2Node_Event_HeadlineText, bool K2Node_Event_bVisible, const class FString& K2Node_Event_ChatMessage, const struct FS_ChatMessage& K2Node_Event_ChatMessageS, int32 K2Node_Event_ChannelID_1, int32 K2Node_Event_ChannelID, int32 K2Node_Event_PlayerID_1, const class FString& K2Node_Event_message_4, int32 K2Node_Event_PlayerID, const class FString& K2Node_Event_message_3, bool K2Node_Event_Away, const class FString& K2Node_Event_message_2, const class FString& K2Node_Event_message_1, const class FString& K2Node_Event_message, bool K2Node_Event_Show, double K2Node_Event_Time, bool K2Node_Event_Show_, const struct FInteractionUIContext& K2Node_Event_InteractionContext, bool K2Node_Event_Display_, const class FString& K2Node_Event_Bar_Label_1, class FText K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_, double K2Node_Event_Health, class FText K2Node_Event_Bar_Header_1, const struct FLinearColor& K2Node_Event_Progress_Bar_Tint, enum class EProgressBarFillType K2Node_Event_Progress_Bar_Direction, const class FString& K2Node_Event_Bar_Label, class FText K2Node_Event_Bar_Header, class FText K2Node_Event_Bar_Sub_Header, const class FString& K2Node_Event_Label_1, const struct FDamageEffectContextData& K2Node_Event_DamageContextData, double K2Node_Event_Time_to_Display_1, double K2Node_Event_Damage_Intensity__Amount_, const struct FLinearColor& K2Node_Event_Colour, bool K2Node_Event_Visible, double K2Node_Event_CurrentProgress, class FText K2Node_Event_Label, bool K2Node_Event_ShowImage, TSoftObjectPtr<class UTexture2D> K2Node_Event_Image, enum class E_UI_HUD_Modes K2Node_Event_HUD_Mode, TScriptInterface<class IEncounterUIDataInterface> K2Node_Event_EncounterData, const struct FNotificationEncounter& K2Node_Event_EncounterMessage, double K2Node_Event_RealmStartTime, double K2Node_Event_Spread, bool K2Node_Event_IsVisible, const struct FS_ContextualControlsData& K2Node_Event_ContextualControlsData, const struct FNotificationEncounter& K2Node_Event_Message_Content, double K2Node_Event_TimeToDisplay_1, const struct FNotificationEncounter& K2Node_Event_MessageContent, bool K2Node_Event_Pin_or_Unpin__Pin_true_will_add_, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content_1, bool K2Node_Event_Remove_Manually, double K2Node_Event_Time_to_Display, bool K2Node_Event_ManuallyRemove_, double K2Node_Event_TimeToDisplay, const struct FS_UpdaterNotificatorInfo& K2Node_Event_Content, const struct FVector& K2Node_Event_Location, enum class EItemQuality K2Node_Event_Quality, class FText K2Node_Event_MainText, class FText K2Node_Event_BodyText, double K2Node_Event_TimeToStayBlack, bool K2Node_Event_To_Black_true__From_Black__False, const struct FStructurePlacementFeedback_Collision& K2Node_Event_Feedback_1, const struct FStructurePlacementFeedback& K2Node_Event_Feedback, bool K2Node_Event_CanRotate, double K2Node_Event_CurrentRotation, bool K2Node_Event_CanAdjustHeight, double K2Node_Event_Height_Current, double K2Node_Event_Height_Max, double K2Node_Event_Height_Min, TScriptInterface<class IBPI_ControllerClientInteractable_C> K2Node_CustomEvent_InteractionObject_1, class UObject* K2Node_CustomEvent_InteractionObject, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IBPI_ControllerClientInteractable_C> K2Node_DynamicCast_AsBPI_Controller_Client_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class EInputActionTypes K2Node_CustomEvent_InputActionType, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_ActionComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class UInputAction* K2Node_CustomEvent_Input_Action, enum class EInputActionTypes K2Node_CustomEvent_ReleaseActionType, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_3, class UBP_ActionComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, const struct FHitResult& Temp_struct_Variable_1, enum class EBuildModeContext K2Node_Event_Mode_1, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component, enum class EBuildModeAction K2Node_Event_Action, bool K2Node_Event_Enabled, bool CallFunc_IsValid_ReturnValue_5, class UBP_BuildModeFeedbackComponent_C* CallFunc_GetBuildModeFeedbackComponent_Component_1, bool CallFunc_IsValid_ReturnValue_6, class UMenusComponent* CallFunc_GetMenusComponent_ReturnValue, TScriptInterface<class IBuildingInterface> CallFunc_CacheAndGetBuildingObject_ReturnValue, bool CallFunc_IsBuilding_ReturnValue, bool CallFunc_IsPlacing_ReturnValue, TScriptInterface<class IBuildingInterface> CallFunc_CacheAndGetBuildingObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsPlacing_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsBuilding_ReturnValue_1, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_2, bool CallFunc_BooleanNOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_2, bool Temp_bool_IsClosed_Variable, const struct FTagValueContainer& Temp_struct_Variable_3, const struct FHitResult& Temp_struct_Variable_4, bool Temp_bool_Variable_1, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, const struct FTagValueContainer& Temp_struct_Variable_5, bool CallFunc_IsValid_ReturnValue_7, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_8, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_6, int32 K2Node_CustomEvent_Hour_1, int32 K2Node_CustomEvent_Min_1, int32 K2Node_CustomEvent_Hour, int32 K2Node_CustomEvent_Min, class UNWXCheatManager* K2Node_DynamicCast_AsNWXCheat_Manager, bool K2Node_DynamicCast_bSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_9, const class FString& K2Node_CustomEvent_CreatureToSpawn, int32 K2Node_CustomEvent_HowMany_, bool K2Node_CustomEvent_Stationary_, bool K2Node_CustomEvent_Immortal_, const struct FVector& K2Node_CustomEvent_DestLocation, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, bool CallFunc_K2_TeleportTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, class APawn* CallFunc_K2_GetPawn_ReturnValue_7, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_11, int32 Temp_int_Loop_Counter_Variable, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_1, const struct FPlayerLoadoutDataReference& K2Node_CustomEvent_Loadout, bool CallFunc_IsServer_ReturnValue_2, const struct FGameplayTagContainer& Temp_struct_Variable_7, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable_8, bool CallFunc_HasAuthority_ReturnValue_5, const struct FHitResult& Temp_struct_Variable_9, bool CallFunc_IsServer_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_9, class APawn* CallFunc_K2_GetPawn_ReturnValue_10, class APawn* CallFunc_K2_GetPawn_ReturnValue_11, const struct FGameplayTag& CallFunc_GodModeTag_GodModeTag, const struct FGameplayTag& CallFunc_GodModeTag_GodModeTag_1, const struct FGameplayTag& CallFunc_GodModeTag_GodModeTag_2, const struct FTagValueContainer& Temp_struct_Variable_10, bool CallFunc_CanUseSupportCommands_ReturnValue, bool CallFunc_CanUseSupportCommands_ReturnValue_1, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class ILocationTrackerInterface> CallFunc_Server_DebugShowAndUnlockAllMapPins_self_CastInput, class APawn* CallFunc_K2_GetPawn_ReturnValue_12, bool CallFunc_HasAuthority_ReturnValue_6, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_CanUseSupportCommands_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_CanUseSupportCommands_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_13, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_11, class ANWXActor* CallFunc_GetDamageSource_Debug_ReturnValue, class ANWXActor* CallFunc_GetDamageSource_Debug_ReturnValue_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags_1, bool CallFunc_CanUseSupportCommands_ReturnValue_4, class ANWXActor* CallFunc_GetDamageSource_Debug_ReturnValue_2, TScriptInterface<class IDamageEventInterface> CallFunc_DamageActor_self_CastInput, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags_2, bool CallFunc_CanUseSupportCommands_ReturnValue_5, bool CallFunc_CanUseSupportCommands_ReturnValue_6, bool CallFunc_CanUseSupportCommands_ReturnValue_7, bool CallFunc_CanUseSupportCommands_ReturnValue_8, bool CallFunc_CanUseSupportCommands_ReturnValue_9, bool CallFunc_CanUseSupportCommands_ReturnValue_10, bool CallFunc_CanUseSupportCommands_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CanUseSupportCommands_ReturnValue_12, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_DebugMenuScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, bool CallFunc_IsValid_ReturnValue_14, class APawn* CallFunc_K2_GetPawn_ReturnValue_15, bool CallFunc_GetCurrentRealmSettings_Success, const struct FRealmSettings& CallFunc_GetCurrentRealmSettings_RealmSettings, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_HasTag_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_16, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_4, class UWBP_DebugThirdPersonCameraWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_CanUseSupportCommands_ReturnValue_13, class AActor* CallFunc_GetRespitePoint_ReturnValue, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_CanUseSupportCommands_ReturnValue_14, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, double Temp_real_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class UInputAction* Temp_object_Variable, double Temp_real_Variable_1, double Temp_real_Variable_1, class FText K2Node_CustomEvent_Header, class FText K2Node_CustomEvent_Body, double K2Node_CustomEvent_Duration, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo, const struct FTransform& Temp_struct_Variable_12, class AHUD* CallFunc_GetHUD_ReturnValue, class USceneCaptureComponent2D* CallFunc_AddComponent_ReturnValue, class AHUD_NWX_C* K2Node_DynamicCast_AsHUD_NWX, bool K2Node_DynamicCast_bSuccess_7, class FText K2Node_CustomEvent_MainText, class FText K2Node_CustomEvent_BodyText, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TSubclassOf<class UNWXCommonWindowWidget> K2Node_Event_WidgetToOpen, float K2Node_Event_DeltaSeconds, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Location, class UNWXCommonWindowWidget* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_17, bool CallFunc_K2_TeleportTo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_17, int32 Temp_int_Array_Index_Variable_1, class ABP_GameState_C* K2Node_CustomEvent_GameState, const struct FS_LevelFastTravelLocation& CallFunc_Array_Get_Item, const class FString& CallFunc_Break_LevelFastTravelLocation_Level_Name, TArray<struct FS_FastTravelInformation>& CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information, const struct FS_FastTravelInformation& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGuid& CallFunc_Break_FastTravelInformation_ID, enum class E_FastTravelLocationState CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Discover_Fast_Travel_Location_Success, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_AreTestsRunning_AreTestsRunning, bool CallFunc_AreTestsRunning_AreTestsRunning_1, bool K2Node_CustomEvent_Success, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsInitialized_bInitialized, const struct FMapPinData& K2Node_Event_MapPinData, const struct FMapPinData& K2Node_CustomEvent_MapPinData, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetInitialInventoryReceived_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UEnvQuery* Temp_object_Variable_1, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_5, enum class EBuildModeContext K2Node_Event_Mode, class UEnvQuery* Temp_object_Variable_2, bool Temp_bool_Variable_2, class UEnvQuery* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_CanUseSupportCommands_ReturnValue_15, bool Temp_bool_Variable_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ExecuteUbergraph_BP_PlayerController");

	Params::ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.K2Node_Event_ShowingHUD = K2Node_Event_ShowingHUD;
	Parms.K2Node_Event_ActorToMark_2 = K2Node_Event_ActorToMark_2;
	Parms.K2Node_Event_PlayerCharacter = K2Node_Event_PlayerCharacter;
	Parms.K2Node_Event_PlayerCamera = K2Node_Event_PlayerCamera;
	Parms.K2Node_Event_Colour_1 = K2Node_Event_Colour_1;
	Parms.K2Node_Event_IconDistance = K2Node_Event_IconDistance;
	Parms.K2Node_Event_Row = K2Node_Event_Row;
	Parms.K2Node_Event_ActorToMark_1 = K2Node_Event_ActorToMark_1;
	Parms.K2Node_Event_ActorToMark = K2Node_Event_ActorToMark;
	Parms.K2Node_Event_MarkerPrecision = K2Node_Event_MarkerPrecision;
	Parms.K2Node_Event_ParticlesVisible = K2Node_Event_ParticlesVisible;
	Parms.K2Node_Event_ParticlesColor = K2Node_Event_ParticlesColor;
	Parms.K2Node_Event_bVisible_1 = K2Node_Event_bVisible_1;
	Parms.K2Node_Event_PlayFX = K2Node_Event_PlayFX;
	Parms.K2Node_Event_DisplayTime_3 = K2Node_Event_DisplayTime_3;
	Parms.K2Node_Event_Quest_Notificator_Info = K2Node_Event_Quest_Notificator_Info;
	Parms.K2Node_Event_DisplayToolTip = K2Node_Event_DisplayToolTip;
	Parms.K2Node_Event_ToolTipIcon = K2Node_Event_ToolTipIcon;
	Parms.K2Node_Event_ToolTipText = K2Node_Event_ToolTipText;
	Parms.K2Node_Event_ToolTipOnly = K2Node_Event_ToolTipOnly;
	Parms.K2Node_Event_DisplayTime_2 = K2Node_Event_DisplayTime_2;
	Parms.K2Node_Event_Row1_1 = K2Node_Event_Row1_1;
	Parms.K2Node_Event_Row2_1 = K2Node_Event_Row2_1;
	Parms.K2Node_Event_BackgroundColor = K2Node_Event_BackgroundColor;
	Parms.K2Node_Event_Crosshair_Type = K2Node_Event_Crosshair_Type;
	Parms.K2Node_Event_CrosshairVisibility = K2Node_Event_CrosshairVisibility;
	Parms.K2Node_Event_Crosshair_Color = K2Node_Event_Crosshair_Color;
	Parms.K2Node_Event_HitIndicator_Type = K2Node_Event_HitIndicator_Type;
	Parms.K2Node_Event_HitIndicatorVisibility = K2Node_Event_HitIndicatorVisibility;
	Parms.K2Node_Event_IndicatorTime = K2Node_Event_IndicatorTime;
	Parms.K2Node_Event_IndicatorColor = K2Node_Event_IndicatorColor;
	Parms.K2Node_Event_Hit_Type = K2Node_Event_Hit_Type;
	Parms.K2Node_Event_IsRecoil = K2Node_Event_IsRecoil;
	Parms.K2Node_Event_Big_Loot_Notify_Info = K2Node_Event_Big_Loot_Notify_Info;
	Parms.K2Node_Event_DisplayTime_1 = K2Node_Event_DisplayTime_1;
	Parms.K2Node_Event_Row1 = K2Node_Event_Row1;
	Parms.K2Node_Event_Row2 = K2Node_Event_Row2;
	Parms.K2Node_Event_DisplayTime = K2Node_Event_DisplayTime;
	Parms.K2Node_Event_TypeText = K2Node_Event_TypeText;
	Parms.K2Node_Event_HeadlineText = K2Node_Event_HeadlineText;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Event_ChatMessage = K2Node_Event_ChatMessage;
	Parms.K2Node_Event_ChatMessageS = K2Node_Event_ChatMessageS;
	Parms.K2Node_Event_ChannelID_1 = K2Node_Event_ChannelID_1;
	Parms.K2Node_Event_ChannelID = K2Node_Event_ChannelID;
	Parms.K2Node_Event_PlayerID_1 = K2Node_Event_PlayerID_1;
	Parms.K2Node_Event_message_4 = K2Node_Event_message_4;
	Parms.K2Node_Event_PlayerID = K2Node_Event_PlayerID;
	Parms.K2Node_Event_message_3 = K2Node_Event_message_3;
	Parms.K2Node_Event_Away = K2Node_Event_Away;
	Parms.K2Node_Event_message_2 = K2Node_Event_message_2;
	Parms.K2Node_Event_message_1 = K2Node_Event_message_1;
	Parms.K2Node_Event_message = K2Node_Event_message;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.K2Node_Event_Time = K2Node_Event_Time;
	Parms.K2Node_Event_Show_ = K2Node_Event_Show_;
	Parms.K2Node_Event_InteractionContext = K2Node_Event_InteractionContext;
	Parms.K2Node_Event_Display_ = K2Node_Event_Display_;
	Parms.K2Node_Event_Bar_Label_1 = K2Node_Event_Bar_Label_1;
	Parms.K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_ = K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_;
	Parms.K2Node_Event_Health = K2Node_Event_Health;
	Parms.K2Node_Event_Bar_Header_1 = K2Node_Event_Bar_Header_1;
	Parms.K2Node_Event_Progress_Bar_Tint = K2Node_Event_Progress_Bar_Tint;
	Parms.K2Node_Event_Progress_Bar_Direction = K2Node_Event_Progress_Bar_Direction;
	Parms.K2Node_Event_Bar_Label = K2Node_Event_Bar_Label;
	Parms.K2Node_Event_Bar_Header = K2Node_Event_Bar_Header;
	Parms.K2Node_Event_Bar_Sub_Header = K2Node_Event_Bar_Sub_Header;
	Parms.K2Node_Event_Label_1 = K2Node_Event_Label_1;
	Parms.K2Node_Event_DamageContextData = K2Node_Event_DamageContextData;
	Parms.K2Node_Event_Time_to_Display_1 = K2Node_Event_Time_to_Display_1;
	Parms.K2Node_Event_Damage_Intensity__Amount_ = K2Node_Event_Damage_Intensity__Amount_;
	Parms.K2Node_Event_Colour = K2Node_Event_Colour;
	Parms.K2Node_Event_Visible = K2Node_Event_Visible;
	Parms.K2Node_Event_CurrentProgress = K2Node_Event_CurrentProgress;
	Parms.K2Node_Event_Label = K2Node_Event_Label;
	Parms.K2Node_Event_ShowImage = K2Node_Event_ShowImage;
	Parms.K2Node_Event_Image = K2Node_Event_Image;
	Parms.K2Node_Event_HUD_Mode = K2Node_Event_HUD_Mode;
	Parms.K2Node_Event_EncounterData = K2Node_Event_EncounterData;
	Parms.K2Node_Event_EncounterMessage = K2Node_Event_EncounterMessage;
	Parms.K2Node_Event_RealmStartTime = K2Node_Event_RealmStartTime;
	Parms.K2Node_Event_Spread = K2Node_Event_Spread;
	Parms.K2Node_Event_IsVisible = K2Node_Event_IsVisible;
	Parms.K2Node_Event_ContextualControlsData = K2Node_Event_ContextualControlsData;
	Parms.K2Node_Event_Message_Content = K2Node_Event_Message_Content;
	Parms.K2Node_Event_TimeToDisplay_1 = K2Node_Event_TimeToDisplay_1;
	Parms.K2Node_Event_MessageContent = K2Node_Event_MessageContent;
	Parms.K2Node_Event_Pin_or_Unpin__Pin_true_will_add_ = K2Node_Event_Pin_or_Unpin__Pin_true_will_add_;
	Parms.K2Node_Event_Content_1 = K2Node_Event_Content_1;
	Parms.K2Node_Event_Remove_Manually = K2Node_Event_Remove_Manually;
	Parms.K2Node_Event_Time_to_Display = K2Node_Event_Time_to_Display;
	Parms.K2Node_Event_ManuallyRemove_ = K2Node_Event_ManuallyRemove_;
	Parms.K2Node_Event_TimeToDisplay = K2Node_Event_TimeToDisplay;
	Parms.K2Node_Event_Content = K2Node_Event_Content;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.K2Node_Event_Quality = K2Node_Event_Quality;
	Parms.K2Node_Event_MainText = K2Node_Event_MainText;
	Parms.K2Node_Event_BodyText = K2Node_Event_BodyText;
	Parms.K2Node_Event_TimeToStayBlack = K2Node_Event_TimeToStayBlack;
	Parms.K2Node_Event_To_Black_true__From_Black__False = K2Node_Event_To_Black_true__From_Black__False;
	Parms.K2Node_Event_Feedback_1 = K2Node_Event_Feedback_1;
	Parms.K2Node_Event_Feedback = K2Node_Event_Feedback;
	Parms.K2Node_Event_CanRotate = K2Node_Event_CanRotate;
	Parms.K2Node_Event_CurrentRotation = K2Node_Event_CurrentRotation;
	Parms.K2Node_Event_CanAdjustHeight = K2Node_Event_CanAdjustHeight;
	Parms.K2Node_Event_Height_Current = K2Node_Event_Height_Current;
	Parms.K2Node_Event_Height_Max = K2Node_Event_Height_Max;
	Parms.K2Node_Event_Height_Min = K2Node_Event_Height_Min;
	Parms.K2Node_CustomEvent_InteractionObject_1 = K2Node_CustomEvent_InteractionObject_1;
	Parms.K2Node_CustomEvent_InteractionObject = K2Node_CustomEvent_InteractionObject;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Controller_Client_Interactable = K2Node_DynamicCast_AsBPI_Controller_Client_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_InputActionType = K2Node_CustomEvent_InputActionType;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CustomEvent_Input_Action = K2Node_CustomEvent_Input_Action;
	Parms.K2Node_CustomEvent_ReleaseActionType = K2Node_CustomEvent_ReleaseActionType;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Event_Mode_1 = K2Node_Event_Mode_1;
	Parms.CallFunc_GetBuildModeFeedbackComponent_Component = CallFunc_GetBuildModeFeedbackComponent_Component;
	Parms.K2Node_Event_Action = K2Node_Event_Action;
	Parms.K2Node_Event_Enabled = K2Node_Event_Enabled;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetBuildModeFeedbackComponent_Component_1 = CallFunc_GetBuildModeFeedbackComponent_Component_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetMenusComponent_ReturnValue = CallFunc_GetMenusComponent_ReturnValue;
	Parms.CallFunc_CacheAndGetBuildingObject_ReturnValue = CallFunc_CacheAndGetBuildingObject_ReturnValue;
	Parms.CallFunc_IsBuilding_ReturnValue = CallFunc_IsBuilding_ReturnValue;
	Parms.CallFunc_IsPlacing_ReturnValue = CallFunc_IsPlacing_ReturnValue;
	Parms.CallFunc_CacheAndGetBuildingObject_ReturnValue_1 = CallFunc_CacheAndGetBuildingObject_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsPlacing_ReturnValue_1 = CallFunc_IsPlacing_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsBuilding_ReturnValue_1 = CallFunc_IsBuilding_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_CustomEvent_Hour_1 = K2Node_CustomEvent_Hour_1;
	Parms.K2Node_CustomEvent_Min_1 = K2Node_CustomEvent_Min_1;
	Parms.K2Node_CustomEvent_Hour = K2Node_CustomEvent_Hour;
	Parms.K2Node_CustomEvent_Min = K2Node_CustomEvent_Min;
	Parms.K2Node_DynamicCast_AsNWXCheat_Manager = K2Node_DynamicCast_AsNWXCheat_Manager;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsDamage_Event_Interface = K2Node_DynamicCast_AsDamage_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CustomEvent_CreatureToSpawn = K2Node_CustomEvent_CreatureToSpawn;
	Parms.K2Node_CustomEvent_HowMany_ = K2Node_CustomEvent_HowMany_;
	Parms.K2Node_CustomEvent_Stationary_ = K2Node_CustomEvent_Stationary_;
	Parms.K2Node_CustomEvent_Immortal_ = K2Node_CustomEvent_Immortal_;
	Parms.K2Node_CustomEvent_DestLocation = K2Node_CustomEvent_DestLocation;
	Parms.CallFunc_K2_GetPawn_ReturnValue_6 = CallFunc_K2_GetPawn_ReturnValue_6;
	Parms.CallFunc_K2_TeleportTo_ReturnValue = CallFunc_K2_TeleportTo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_K2_GetPawn_ReturnValue_7 = CallFunc_K2_GetPawn_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsDamage_Event_Interface_1 = K2Node_DynamicCast_AsDamage_Event_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_8 = CallFunc_K2_GetPawn_ReturnValue_8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loadout = K2Node_CustomEvent_Loadout;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_9 = CallFunc_K2_GetPawn_ReturnValue_9;
	Parms.CallFunc_K2_GetPawn_ReturnValue_10 = CallFunc_K2_GetPawn_ReturnValue_10;
	Parms.CallFunc_K2_GetPawn_ReturnValue_11 = CallFunc_K2_GetPawn_ReturnValue_11;
	Parms.CallFunc_GodModeTag_GodModeTag = CallFunc_GodModeTag_GodModeTag;
	Parms.CallFunc_GodModeTag_GodModeTag_1 = CallFunc_GodModeTag_GodModeTag_1;
	Parms.CallFunc_GodModeTag_GodModeTag_2 = CallFunc_GodModeTag_GodModeTag_2;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue = CallFunc_CanUseSupportCommands_ReturnValue;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_1 = CallFunc_CanUseSupportCommands_ReturnValue_1;
	Parms.CallFunc_GetMapTracker_MapTrackerComponent = CallFunc_GetMapTracker_MapTrackerComponent;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Server_DebugShowAndUnlockAllMapPins_self_CastInput = CallFunc_Server_DebugShowAndUnlockAllMapPins_self_CastInput;
	Parms.CallFunc_K2_GetPawn_ReturnValue_12 = CallFunc_K2_GetPawn_ReturnValue_12;
	Parms.CallFunc_HasAuthority_ReturnValue_6 = CallFunc_HasAuthority_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_Character_1 = K2Node_DynamicCast_AsBP_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_2 = CallFunc_CanUseSupportCommands_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_13 = CallFunc_K2_GetPawn_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_3 = CallFunc_CanUseSupportCommands_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_14 = CallFunc_K2_GetPawn_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.CallFunc_GetDamageSource_Debug_ReturnValue = CallFunc_GetDamageSource_Debug_ReturnValue;
	Parms.CallFunc_GetDamageSource_Debug_ReturnValue_1 = CallFunc_GetDamageSource_Debug_ReturnValue_1;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;
	Parms.CallFunc_DamageActor_AggregatedDamageTags_1 = CallFunc_DamageActor_AggregatedDamageTags_1;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_4 = CallFunc_CanUseSupportCommands_ReturnValue_4;
	Parms.CallFunc_GetDamageSource_Debug_ReturnValue_2 = CallFunc_GetDamageSource_Debug_ReturnValue_2;
	Parms.CallFunc_DamageActor_self_CastInput = CallFunc_DamageActor_self_CastInput;
	Parms.CallFunc_DamageActor_AggregatedDamageTags_2 = CallFunc_DamageActor_AggregatedDamageTags_2;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_5 = CallFunc_CanUseSupportCommands_ReturnValue_5;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_6 = CallFunc_CanUseSupportCommands_ReturnValue_6;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_7 = CallFunc_CanUseSupportCommands_ReturnValue_7;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_8 = CallFunc_CanUseSupportCommands_ReturnValue_8;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_9 = CallFunc_CanUseSupportCommands_ReturnValue_9;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_10 = CallFunc_CanUseSupportCommands_ReturnValue_10;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_11 = CallFunc_CanUseSupportCommands_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_12 = CallFunc_CanUseSupportCommands_ReturnValue_12;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.K2Node_CustomEvent_QueryInstance = K2Node_CustomEvent_QueryInstance;
	Parms.K2Node_CustomEvent_QueryStatus = K2Node_CustomEvent_QueryStatus;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_K2_GetPawn_ReturnValue_15 = CallFunc_K2_GetPawn_ReturnValue_15;
	Parms.CallFunc_GetCurrentRealmSettings_Success = CallFunc_GetCurrentRealmSettings_Success;
	Parms.CallFunc_GetCurrentRealmSettings_RealmSettings = CallFunc_GetCurrentRealmSettings_RealmSettings;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_16 = CallFunc_K2_GetPawn_ReturnValue_16;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_13 = CallFunc_CanUseSupportCommands_ReturnValue_13;
	Parms.CallFunc_GetRespitePoint_ReturnValue = CallFunc_GetRespitePoint_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_14 = CallFunc_CanUseSupportCommands_ReturnValue_14;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue = K2Node_EnhancedInputActionEvent_ActionValue;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime = K2Node_EnhancedInputActionEvent_ElapsedTime;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime = K2Node_EnhancedInputActionEvent_TriggeredTime;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction = K2Node_EnhancedInputActionEvent_SourceAction;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue = CallFunc_Conv_InputActionValueToBool_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.K2Node_CustomEvent_Header = K2Node_CustomEvent_Header;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;
	Parms.K2Node_MakeStruct_S_UpdaterNotificatorInfo = K2Node_MakeStruct_S_UpdaterNotificatorInfo;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_NWX = K2Node_DynamicCast_AsHUD_NWX;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_MainText = K2Node_CustomEvent_MainText;
	Parms.K2Node_CustomEvent_BodyText = K2Node_CustomEvent_BodyText;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager_1 = CallFunc_Get_HUD_Manager_HUD_Manager_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_WidgetToOpen = K2Node_Event_WidgetToOpen;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_1 = CallFunc_GetLocalPlayerFromController_ReturnValue_1;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_17 = CallFunc_K2_GetPawn_ReturnValue_17;
	Parms.CallFunc_K2_TeleportTo_ReturnValue_1 = CallFunc_K2_TeleportTo_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_GameState = K2Node_CustomEvent_GameState;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Break_LevelFastTravelLocation_Level_Name = CallFunc_Break_LevelFastTravelLocation_Level_Name;
	Parms.CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information = CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Break_FastTravelInformation_ID = CallFunc_Break_FastTravelInformation_ID;
	Parms.CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State = CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Discover_Fast_Travel_Location_Success = CallFunc_Discover_Fast_Travel_Location_Success;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_AreTestsRunning_AreTestsRunning = CallFunc_AreTestsRunning_AreTestsRunning;
	Parms.CallFunc_AreTestsRunning_AreTestsRunning_1 = CallFunc_AreTestsRunning_AreTestsRunning_1;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsInitialized_bInitialized = CallFunc_IsInitialized_bInitialized;
	Parms.K2Node_Event_MapPinData = K2Node_Event_MapPinData;
	Parms.K2Node_CustomEvent_MapPinData = K2Node_CustomEvent_MapPinData;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsPlayInEditor_ReturnValue = CallFunc_IsPlayInEditor_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetInitialInventoryReceived_ReturnValue = CallFunc_GetInitialInventoryReceived_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.K2Node_Event_Mode = K2Node_Event_Mode;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_15 = CallFunc_CanUseSupportCommands_ReturnValue_15;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OnShowDebugStats__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::OnShowDebugStats__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnShowDebugStats__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.OnInteractHold__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInputPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnInteractHold__DelegateSignature(bool bInputPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnInteractHold__DelegateSignature");

	Params::ABP_PlayerController_C_OnInteractHold__DelegateSignature_Params Parms{};

	Parms.bInputPressed = bInputPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.OnInputModeChanged_Dispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputContext           Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnInputModeChanged_Dispatcher__DelegateSignature(enum class EInputContext Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnInputModeChanged_Dispatcher__DelegateSignature");

	Params::ABP_PlayerController_C_OnInputModeChanged_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerController.BP_PlayerController_C.CharacterSelect_MenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::CharacterSelect_MenuClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "CharacterSelect_MenuClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.ControllerReferenceSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerController_C::ControllerReferenceSet__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "ControllerReferenceSet__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerController.BP_PlayerController_C.OnRepPawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_C::OnRepPawn__DelegateSignature(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerController_C", "OnRepPawn__DelegateSignature");

	Params::ABP_PlayerController_C_OnRepPawn__DelegateSignature_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


