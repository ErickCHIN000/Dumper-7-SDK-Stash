#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C
// (None)

class UClass* UWBP_RealmCardMachine_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RealmCardMachine_Screen_C");

	return Clss;
}


// WBP_RealmCardMachine_Screen_C WBP_RealmCardMachine_Screen.Default__WBP_RealmCardMachine_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RealmCardMachine_Screen_C* UWBP_RealmCardMachine_Screen_C::GetDefaultObj()
{
	static class UWBP_RealmCardMachine_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RealmCardMachine_Screen_C*>(UWBP_RealmCardMachine_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.OnNoCardsOnGridListtoFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RealmCardMachine_Screen_C::OnNoCardsOnGridListtoFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "OnNoCardsOnGridListtoFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LFirstVisibleChild                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_TryGetFirstVisibleChild_FirstVisibleChild               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_TryGetFirstVisibleChild_Widget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_RealmCardMachine_Screen_C::BP_GetDesiredFocusTarget(class UWidget* LFirstVisibleChild, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_TryGetFirstVisibleChild_FirstVisibleChild, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_TryGetFirstVisibleChild_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_RealmCardMachine_Screen_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.LFirstVisibleChild = LFirstVisibleChild;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetFirstVisibleChild_FirstVisibleChild = CallFunc_TryGetFirstVisibleChild_FirstVisibleChild;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TryGetFirstVisibleChild_Widget = CallFunc_TryGetFirstVisibleChild_Widget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.OnTableCardDragged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDragging                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CardData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::OnTableCardDragged(bool IsDragging, const struct FInventoryEntry& CardData, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "OnTableCardDragged");

	Params::UWBP_RealmCardMachine_Screen_C_OnTableCardDragged_Params Parms{};

	Parms.IsDragging = IsDragging;
	Parms.CardData = CardData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.OnGridListCardDragged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDragging                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAddCardToTable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::OnGridListCardDragged(bool IsDragging, const struct FInventoryEntry& Card, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_CanAddCardToTable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "OnGridListCardDragged");

	Params::UWBP_RealmCardMachine_Screen_C_OnGridListCardDragged_Params Parms{};

	Parms.IsDragging = IsDragging;
	Parms.Card = Card;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_CanAddCardToTable_ReturnValue = CallFunc_CanAddCardToTable_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.OnRealmSettingUpdated
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRealmSettings              NewRealmSettings                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FInventoryEntry>     LTableCards                                                      (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetTableCards_TableCards                                (ReferenceParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::OnRealmSettingUpdated(const struct FRealmSettings& NewRealmSettings, const TArray<struct FInventoryEntry>& LTableCards, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Array_IsEmpty_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetTableCards_TableCards, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "OnRealmSettingUpdated");

	Params::UWBP_RealmCardMachine_Screen_C_OnRealmSettingUpdated_Params Parms{};

	Parms.NewRealmSettings = NewRealmSettings;
	Parms.LTableCards = LTableCards;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_GetTableCards_TableCards = CallFunc_GetTableCards_TableCards;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.OnBackdropInstantAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::OnBackdropInstantAction(const struct FInventoryEntry& Card, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "OnBackdropInstantAction");

	Params::UWBP_RealmCardMachine_Screen_C_OnBackdropInstantAction_Params Parms{};

	Parms.Card = Card;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.UpdateDropTargetAnimations
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Draggable_DropTarget_C* DropTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::UpdateDropTargetAnimations(class UWBP_Draggable_DropTarget_C* DropTarget, bool IsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "UpdateDropTargetAnimations");

	Params::UWBP_RealmCardMachine_Screen_C_UpdateDropTargetAnimations_Params Parms{};

	Parms.DropTarget = DropTarget;
	Parms.IsEnabled = IsEnabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.OnGridListInstantActionConfirmed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::OnGridListInstantActionConfirmed(const struct FInventoryEntry& Card, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "OnGridListInstantActionConfirmed");

	Params::UWBP_RealmCardMachine_Screen_C_OnGridListInstantActionConfirmed_Params Parms{};

	Parms.Card = Card;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.OnCardHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ERealmCardType          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmCardType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDragDropping_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmCardType          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::OnCardHovered(bool IsHovered, const struct FInventoryEntry& Card, enum class ERealmCardType Type, bool Temp_bool_Variable, enum class ERealmCardType Temp_byte_Variable, bool CallFunc_IsDragDropping_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ERealmCardType K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "OnCardHovered");

	Params::UWBP_RealmCardMachine_Screen_C_OnCardHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.Card = Card;
	Parms.Type = Type;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsDragDropping_ReturnValue = CallFunc_IsDragDropping_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.InitalizeCardMachine
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPortalControllerComponent*  PortalController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URealmCardMachineComponent*  RealmCardMachineComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPortalControllerInterface>CallFunc_GetPortalState_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETemporalPortalState    CallFunc_GetPortalState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADeploymentPortal*           CallFunc_GetDeploymentPortal_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::InitalizeCardMachine(class UPortalControllerComponent* PortalController, class URealmCardMachineComponent* RealmCardMachineComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IPortalControllerInterface> CallFunc_GetPortalState_self_CastInput, enum class ETemporalPortalState CallFunc_GetPortalState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ADeploymentPortal* CallFunc_GetDeploymentPortal_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "InitalizeCardMachine");

	Params::UWBP_RealmCardMachine_Screen_C_InitalizeCardMachine_Params Parms{};

	Parms.PortalController = PortalController;
	Parms.RealmCardMachineComponent = RealmCardMachineComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPortalState_self_CastInput = CallFunc_GetPortalState_self_CastInput;
	Parms.CallFunc_GetPortalState_ReturnValue = CallFunc_GetPortalState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDeploymentPortal_ReturnValue = CallFunc_GetDeploymentPortal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.InitializeInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::InitializeInternal(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "InitializeInternal");

	Params::UWBP_RealmCardMachine_Screen_C_InitializeInternal_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.OnPortalStateChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETemporalPortalState    InPortalState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeploymentPortal*           DeploymentPortal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::OnPortalStateChanged(enum class ETemporalPortalState InPortalState, class ADeploymentPortal* DeploymentPortal, bool K2Node_SwitchEnum_CmpSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "OnPortalStateChanged");

	Params::UWBP_RealmCardMachine_Screen_C_OnPortalStateChanged_Params Parms{};

	Parms.InPortalState = InPortalState;
	Parms.DeploymentPortal = DeploymentPortal;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "RemoveBindings");

	Params::UWBP_RealmCardMachine_Screen_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RealmCardMachine_Screen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RealmCardMachine_Screen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.BndEvt__WBP_RealmCardMachine_Screen_CBU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::BndEvt__WBP_RealmCardMachine_Screen_CBU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "BndEvt__WBP_RealmCardMachine_Screen_CBU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_RealmCardMachine_Screen_C_BndEvt__WBP_RealmCardMachine_Screen_CBU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.BndEvt__WBP_RealmCardMachine_Screen_GridListDropTarget_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDragDropOperation*          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::BndEvt__WBP_RealmCardMachine_Screen_GridListDropTarget_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "BndEvt__WBP_RealmCardMachine_Screen_GridListDropTarget_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature");

	Params::UWBP_RealmCardMachine_Screen_C_BndEvt__WBP_RealmCardMachine_Screen_GridListDropTarget_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.BndEvt__WBP_RealmCardMachine_Screen_WBP_Draggable_DropTarget_K2Node_ComponentBoundEvent_2_DragDropped_Item__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDragDropOperation*          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::BndEvt__WBP_RealmCardMachine_Screen_WBP_Draggable_DropTarget_K2Node_ComponentBoundEvent_2_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "BndEvt__WBP_RealmCardMachine_Screen_WBP_Draggable_DropTarget_K2Node_ComponentBoundEvent_2_DragDropped_Item__DelegateSignature");

	Params::UWBP_RealmCardMachine_Screen_C_BndEvt__WBP_RealmCardMachine_Screen_WBP_Draggable_DropTarget_K2Node_ComponentBoundEvent_2_DragDropped_Item__DelegateSignature_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.DoDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RealmCardMachine_Screen_C::DoDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "DoDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C.ExecuteUbergraph_WBP_RealmCardMachine_Screen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_TryGetFirstVisibleChild_FirstVisibleChild               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          K2Node_ComponentBoundEvent_Payload_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation_RealmCard_C*K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          K2Node_ComponentBoundEvent_Payload                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation_RealmCard_C*K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmCardMachine_Screen_C::ExecuteUbergraph_WBP_RealmCardMachine_Screen(int32 EntryPoint, class UWidget* CallFunc_TryGetFirstVisibleChild_FirstVisibleChild, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload_1, class UDragDropOperation_RealmCard_C* K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload, class UDragDropOperation_RealmCard_C* K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmCardMachine_Screen_C", "ExecuteUbergraph_WBP_RealmCardMachine_Screen");

	Params::UWBP_RealmCardMachine_Screen_C_ExecuteUbergraph_WBP_RealmCardMachine_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetFirstVisibleChild_FirstVisibleChild = CallFunc_TryGetFirstVisibleChild_FirstVisibleChild;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Payload_1 = K2Node_ComponentBoundEvent_Payload_1;
	Parms.K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card = K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Payload = K2Node_ComponentBoundEvent_Payload;
	Parms.K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card_1 = K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_3 = CallFunc_GetOwningPlayerController_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


