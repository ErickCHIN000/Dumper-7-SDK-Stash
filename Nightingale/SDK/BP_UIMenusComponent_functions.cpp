#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIMenusComponent.BP_UIMenusComponent_C
// (None)

class UClass* UBP_UIMenusComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIMenusComponent_C");

	return Clss;
}


// BP_UIMenusComponent_C BP_UIMenusComponent.Default__BP_UIMenusComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIMenusComponent_C* UBP_UIMenusComponent_C::GetDefaultObj()
{
	static class UBP_UIMenusComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIMenusComponent_C*>(UBP_UIMenusComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.IsEntityPinned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPinned                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::IsEntityPinned(class FName ID, bool* IsPinned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "IsEntityPinned");

	Params::UBP_UIMenusComponent_C_IsEntityPinned_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPinned != nullptr)
		*IsPinned = Parms.IsPinned;

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GetDefaultActionStationType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ActionStationType  ActionStationType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::GetDefaultActionStationType(enum class Enum_ActionStationType* ActionStationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "GetDefaultActionStationType");

	Params::UBP_UIMenusComponent_C_GetDefaultActionStationType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionStationType != nullptr)
		*ActionStationType = Parms.ActionStationType;

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GetPingObjectType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PingObjectType        PingObjectType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DataTableRowName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::GetPingObjectType(enum class E_PingObjectType* PingObjectType, class FName* DataTableRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "GetPingObjectType");

	Params::UBP_UIMenusComponent_C_GetPingObjectType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PingObjectType != nullptr)
		*PingObjectType = Parms.PingObjectType;

	if (DataTableRowName != nullptr)
		*DataTableRowName = Parms.DataTableRowName;

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OnErrorMessageAdded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FErrorMessageData           ErrorMessageData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_Error_C*          CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::OnErrorMessageAdded(struct FErrorMessageData& ErrorMessageData, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_Error_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OnErrorMessageAdded");

	Params::UBP_UIMenusComponent_C_OnErrorMessageAdded_Params Parms{};

	Parms.ErrorMessageData = ErrorMessageData;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.InitializeErrorMessaging
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetOwningPlayerController_PlayerController              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetOwningPlayerController_PlayerController_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FErrorMessageData           CallFunc_GetNextError_OutErrorMessageData                        (None)
// bool                               CallFunc_GetNextError_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UErrorMessagingSubsystem*    CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetOwningPlayerController_PlayerController_2            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::InitializeErrorMessaging(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABP_PlayerController_C* CallFunc_GetOwningPlayerController_PlayerController, class ABP_PlayerController_C* CallFunc_GetOwningPlayerController_PlayerController_1, const struct FErrorMessageData& CallFunc_GetNextError_OutErrorMessageData, bool CallFunc_GetNextError_ReturnValue, class UErrorMessagingSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerController_C* CallFunc_GetOwningPlayerController_PlayerController_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "InitializeErrorMessaging");

	Params::UBP_UIMenusComponent_C_InitializeErrorMessaging_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_PlayerController = CallFunc_GetOwningPlayerController_PlayerController;
	Parms.CallFunc_GetOwningPlayerController_PlayerController_1 = CallFunc_GetOwningPlayerController_PlayerController_1;
	Parms.CallFunc_GetNextError_OutErrorMessageData = CallFunc_GetNextError_OutErrorMessageData;
	Parms.CallFunc_GetNextError_ReturnValue = CallFunc_GetNextError_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_PlayerController_2 = CallFunc_GetOwningPlayerController_PlayerController_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.IssueReportWindowCurrentlyOpen
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXHUDBase*                 CallFunc_GetNWXHUD_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentlyOpenWindowOfClass_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_UIMenusComponent_C::IssueReportWindowCurrentlyOpen(class ANWXHUDBase* CallFunc_GetNWXHUD_ReturnValue, bool CallFunc_IsCurrentlyOpenWindowOfClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "IssueReportWindowCurrentlyOpen");

	Params::UBP_UIMenusComponent_C_IssueReportWindowCurrentlyOpen_Params Parms{};

	Parms.CallFunc_GetNWXHUD_ReturnValue = CallFunc_GetNWXHUD_ReturnValue;
	Parms.CallFunc_IsCurrentlyOpenWindowOfClass_ReturnValue = CallFunc_IsCurrentlyOpenWindowOfClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.CloseNarrativePlayablePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::CloseNarrativePlayablePopup(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "CloseNarrativePlayablePopup");

	Params::UBP_UIMenusComponent_C_CloseNarrativePlayablePopup_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenWindowFromKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      Window                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_SocialScreen_C*         CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue         (NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_2        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerMap_Screen_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_2              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_Screen_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_3        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_3              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_Screen_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookQuestCategoryTag_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_4        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_5        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_4              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_5              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_Screen_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryScreen_C*      CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookBuildingCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::OpenWindowFromKey(const struct FKey& Key, class UNWXCommonWindowWidget** Window, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_SocialScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2, class UWBP_PlayerMap_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_2, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_3, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_3, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_4, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_5, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_4, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_5, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4, class UWBP_InventoryScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5, const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OpenWindowFromKey");

	Params::UBP_UIMenusComponent_C_OpenWindowFromKey_Params Parms{};

	Parms.Key = Key;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_1 = CallFunc_GetLocalPlayerController_LocalPlayerController_1;
	Parms.CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue = CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_1 = CallFunc_GetLocalPlayerFromController_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_2 = CallFunc_GetLocalPlayerController_LocalPlayerController_2;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_2 = CallFunc_GetLocalPlayerFromController_ReturnValue_2;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_3 = CallFunc_GetLocalPlayerController_LocalPlayerController_3;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_3 = CallFunc_GetLocalPlayerFromController_ReturnValue_3;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3;
	Parms.CallFunc_GuideBookQuestCategoryTag_ReturnValue = CallFunc_GuideBookQuestCategoryTag_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_4 = CallFunc_GetLocalPlayerController_LocalPlayerController_4;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_5 = CallFunc_GetLocalPlayerController_LocalPlayerController_5;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_4 = CallFunc_GetLocalPlayerFromController_ReturnValue_4;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_5 = CallFunc_GetLocalPlayerFromController_ReturnValue_5;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5;
	Parms.CallFunc_GuideBookBuildingCategoryTag_ReturnValue = CallFunc_GuideBookBuildingCategoryTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Window != nullptr)
		*Window = Parms.Window;

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.ApplyDesiredInputMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXWindowWidget*            WindowWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXWindowWidget*            K2Node_DynamicCast_AsNWXWindow_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputMode              CallFunc_GetDesiredInputMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::ApplyDesiredInputMode(class UObject* Object, class UNWXWindowWidget* WindowWidget, class UNWXWindowWidget* K2Node_DynamicCast_AsNWXWindow_Widget, bool K2Node_DynamicCast_bSuccess, enum class EInputMode CallFunc_GetDesiredInputMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "ApplyDesiredInputMode");

	Params::UBP_UIMenusComponent_C_ApplyDesiredInputMode_Params Parms{};

	Parms.Object = Object;
	Parms.WindowWidget = WindowWidget;
	Parms.K2Node_DynamicCast_AsNWXWindow_Widget = K2Node_DynamicCast_AsNWXWindow_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDesiredInputMode_ReturnValue = CallFunc_GetDesiredInputMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.IsWindowOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UNWXWindowWidget*            CallFunc_GetCurrentlyOpenWindow_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_UIMenusComponent_C::IsWindowOpen(class ABP_PlayerController_C* PlayerController, class UNWXWindowWidget* CallFunc_GetCurrentlyOpenWindow_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "IsWindowOpen");

	Params::UBP_UIMenusComponent_C_IsWindowOpen_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetCurrentlyOpenWindow_ReturnValue = CallFunc_GetCurrentlyOpenWindow_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.BP_UIMenusComponent_AutoGenFunc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroup                      Group                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOnlineServiceStatus        Status                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMember                     CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::BP_UIMenusComponent_AutoGenFunc(struct FGroup& Group, struct FOnlineServiceStatus& Status, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FMember& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "BP_UIMenusComponent_AutoGenFunc");

	Params::UBP_UIMenusComponent_C_BP_UIMenusComponent_AutoGenFunc_Params Parms{};

	Parms.Group = Group;
	Parms.Status = Status;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.CanOpenWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNWXWindowWidget*            Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ZOrder                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldIsTearingDown_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_NWX_C*                  K2Node_DynamicCast_AsHUD_NWX                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldIsTearingDown_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_UIMenusComponent_C::CanOpenWindow(class UNWXWindowWidget* Window, int32 ZOrder, class ANWXPlayerController* PlayerController, bool CallFunc_GetWorldIsTearingDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD_NWX_C* K2Node_DynamicCast_AsHUD_NWX, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetWorldIsTearingDown_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "CanOpenWindow");

	Params::UBP_UIMenusComponent_C_CanOpenWindow_Params Parms{};

	Parms.Window = Window;
	Parms.ZOrder = ZOrder;
	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetWorldIsTearingDown_ReturnValue = CallFunc_GetWorldIsTearingDown_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_NWX = K2Node_DynamicCast_AsHUD_NWX;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWorldIsTearingDown_ReturnValue_1 = CallFunc_GetWorldIsTearingDown_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenDialogueInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBase_C*         Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::OpenDialogueInternal(class UWBP_DialogueBase_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OpenDialogueInternal");

	Params::UBP_UIMenusComponent_C_OpenDialogueInternal_Params Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.CloseLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIMenusComponent_C::CloseLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "CloseLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIMenusComponent_C::OpenLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OpenLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.SetInputModeToGameAndUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WidgetToFocus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::SetInputModeToGameAndUI(class UWidget* WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "SetInputModeToGameAndUI");

	Params::UBP_UIMenusComponent_C_SetInputModeToGameAndUI_Params Parms{};

	Parms.WidgetToFocus = WidgetToFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NpcActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DialogueBase_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::OpenDialogue(class AActor* NpcActor, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UWBP_DialogueBase_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OpenDialogue");

	Params::UBP_UIMenusComponent_C_OpenDialogue_Params Parms{};

	Parms.NpcActor = NpcActor;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GetOwningPlayerController
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerController_C*      PlayerController                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::GetOwningPlayerController(class ABP_PlayerController_C** PlayerController, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "GetOwningPlayerController");

	Params::UBP_UIMenusComponent_C_GetOwningPlayerController_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.AddPanelToViewport
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ZOrder                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXWindowWidget*            CallFunc_GetCurrentlyOpenWindow_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputMode              CallFunc_GetDesiredInputMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetOwningPlayerController_PlayerController              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>CallFunc_Get_HUD_Manager_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::AddPanelToViewport(class UUserWidget* Window, int32 ZOrder, class UNWXWindowWidget* CallFunc_GetCurrentlyOpenWindow_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EInputMode CallFunc_GetDesiredInputMode_ReturnValue, class ABP_PlayerController_C* CallFunc_GetOwningPlayerController_PlayerController, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "AddPanelToViewport");

	Params::UBP_UIMenusComponent_C_AddPanelToViewport_Params Parms{};

	Parms.Window = Window;
	Parms.ZOrder = ZOrder;
	Parms.CallFunc_GetCurrentlyOpenWindow_ReturnValue = CallFunc_GetCurrentlyOpenWindow_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDesiredInputMode_ReturnValue = CallFunc_GetDesiredInputMode_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_PlayerController = CallFunc_GetOwningPlayerController_PlayerController;
	Parms.CallFunc_Get_HUD_Manager_HUD_Manager = CallFunc_Get_HUD_Manager_HUD_Manager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.SetInputModeToGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIMenusComponent_C::SetInputModeToGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "SetInputModeToGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.SetInputModeToUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WidgetToFocus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::SetInputModeToUI(class UWidget* WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "SetInputModeToUI");

	Params::UBP_UIMenusComponent_C_SetInputModeToUI_Params Parms{};

	Parms.WidgetToFocus = WidgetToFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.Server_ReviveHumanNPC
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Creature_NPC_Human_C*    NPCToRevive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::Server_ReviveHumanNPC(class ABP_Creature_NPC_Human_C* NPCToRevive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "Server_ReviveHumanNPC");

	Params::UBP_UIMenusComponent_C_Server_ReviveHumanNPC_Params Parms{};

	Parms.NPCToRevive = NPCToRevive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.Client_OpenNPCScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_NPCComponent_C*          NPCComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NPC_Actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::Client_OpenNPCScreen(class UBP_NPCComponent_C* NPCComponent, class AActor* NPC_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "Client_OpenNPCScreen");

	Params::UBP_UIMenusComponent_C_Client_OpenNPCScreen_Params Parms{};

	Parms.NPCComponent = NPCComponent;
	Parms.NPC_Actor = NPC_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GetGroupDetails
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      GroupID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::GetGroupDetails(const class FString& GroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "GetGroupDetails");

	Params::UBP_UIMenusComponent_C_GetGroupDetails_Params Parms{};

	Parms.GroupID = GroupID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.ReturnGroupDetails
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::ReturnGroupDetails(const class FString& ID, const class FString& Name, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "ReturnGroupDetails");

	Params::UBP_UIMenusComponent_C_ReturnGroupDetails_Params Parms{};

	Parms.ID = ID;
	Parms.Name = Name;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.PopulatePartyMembersForClient
// (Net, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMember                     NewItem                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_UIMenusComponent_C::PopulatePartyMembersForClient(struct FMember& NewItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "PopulatePartyMembersForClient");

	Params::UBP_UIMenusComponent_C_PopulatePartyMembersForClient_Params Parms{};

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UIMenusComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.EnterPlacementModeFromUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    PlacementStructureAssetRef                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::EnterPlacementModeFromUI(const struct FStructureAssetReference& PlacementStructureAssetRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "EnterPlacementModeFromUI");

	Params::UBP_UIMenusComponent_C_EnterPlacementModeFromUI_Params Parms{};

	Parms.PlacementStructureAssetRef = PlacementStructureAssetRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.TrackBuildingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureAssetRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::TrackBuildingEntity(const struct FStructureAssetReference& StructureAssetRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "TrackBuildingEntity");

	Params::UBP_UIMenusComponent_C_TrackBuildingEntity_Params Parms{};

	Parms.StructureAssetRef = StructureAssetRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.TrackCraftingEntity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    CraftingRecipeRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::TrackCraftingEntity(const struct FCraftingRecipeReference& CraftingRecipeRef, bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "TrackCraftingEntity");

	Params::UBP_UIMenusComponent_C_TrackCraftingEntity_Params Parms{};

	Parms.CraftingRecipeRef = CraftingRecipeRef;
	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OnClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXWindowWidget*            Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::OnClosed(class UNWXWindowWidget* Window)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OnClosed");

	Params::UBP_UIMenusComponent_C_OnClosed_Params Parms{};

	Parms.Window = Window;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.InstantSwitchToWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::InstantSwitchToWindow(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "InstantSwitchToWindow");

	Params::UBP_UIMenusComponent_C_InstantSwitchToWindow_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenPlayerReadinessWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIMenusComponent_C::OpenPlayerReadinessWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OpenPlayerReadinessWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenNarrativePlayablePopup
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_UIMenusComponent_C::OpenNarrativePlayablePopup(class FText TitleText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OpenNarrativePlayablePopup");

	Params::UBP_UIMenusComponent_C_OpenNarrativePlayablePopup_Params Parms{};

	Parms.TitleText = TitleText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenFeedbackWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIMenusComponent_C::OpenFeedbackWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OpenFeedbackWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.OpenRenameStructureMenu
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::OpenRenameStructureMenu(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "OpenRenameStructureMenu");

	Params::UBP_UIMenusComponent_C_OpenRenameStructureMenu_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.ExecuteUbergraph_BP_UIMenusComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWindowOpen_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ReportIssue_Screen_C*   CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_Human_C*    K2Node_CustomEvent_NPCToRevive                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_NPC_Screen_C*           CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_NPCComponent_C*          K2Node_CustomEvent_NpcComponent                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_NPC_Actor                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_GroupId                                       (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGroupComponentBase*         CallFunc_GetGroupSystem_GroupComponent                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Name                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Message                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetGroupName_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// struct FMember                     K2Node_CustomEvent_NewItem                                       (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_CustomEvent_PlacementStructureAssetRef                    (HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_Event_StructureAssetRef                                   (HasGetValueTypeHash)
// bool                               K2Node_Event_IsAdding_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    K2Node_Event_CraftingRecipeRef                                   (HasGetValueTypeHash)
// bool                               K2Node_Event_IsAdding                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXWindowWidget*            K2Node_CustomEvent_Window                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      CallFunc_OpenWindowFromKey_Window                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_Event_Key                                                 (HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_2              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerReadiness_C*      CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TitleText                                     (None)
// class FText                        K2Node_CustomEvent_BodyText                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_3              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ScreenShotDir_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IssueReportWindowCurrentlyOpen_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Structure                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_2        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue_4              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Structure_Rename_C*     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::ExecuteUbergraph_BP_UIMenusComponent(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, bool CallFunc_IsWindowOpen_ReturnValue, class UWBP_ReportIssue_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, class ABP_Creature_NPC_Human_C* K2Node_CustomEvent_NPCToRevive, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_1, class UWBP_NPC_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UBP_NPCComponent_C* K2Node_CustomEvent_NpcComponent, class AActor* K2Node_CustomEvent_NPC_Actor, bool CallFunc_IsValid_ReturnValue_1, const class FString& K2Node_CustomEvent_GroupId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGroupComponentBase* CallFunc_GetGroupSystem_GroupComponent, const class FString& K2Node_CustomEvent_ID, const class FString& K2Node_CustomEvent_Name, const class FString& K2Node_CustomEvent_Message, const class FString& CallFunc_GetGroupName_ReturnValue, const struct FMember& K2Node_CustomEvent_NewItem, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FStructureAssetReference& K2Node_CustomEvent_PlacementStructureAssetRef, const struct FStructureAssetReference& K2Node_Event_StructureAssetRef, bool K2Node_Event_IsAdding_1, const struct FCraftingRecipeReference& K2Node_Event_CraftingRecipeRef, bool K2Node_Event_IsAdding, class UNWXWindowWidget* K2Node_CustomEvent_Window, class UNWXCommonWindowWidget* CallFunc_OpenWindowFromKey_Window, const struct FKey& K2Node_Event_Key, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_2, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess_1, class UWBP_PlayerReadiness_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue_2, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue_3, class FText K2Node_CustomEvent_TitleText, class FText K2Node_CustomEvent_BodyText, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_3, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, TSubclassOf<class IInterface> Temp_class_Variable_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue_1, const class FString& CallFunc_ScreenShotDir_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IssueReportWindowCurrentlyOpen_ReturnValue, class UObject* K2Node_CustomEvent_Structure, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2, class FText Temp_text_Variable, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_4, class UWBP_Structure_Rename_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "ExecuteUbergraph_BP_UIMenusComponent");

	Params::UBP_UIMenusComponent_C_ExecuteUbergraph_BP_UIMenusComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_IsWindowOpen_ReturnValue = CallFunc_IsWindowOpen_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_NPCToRevive = K2Node_CustomEvent_NPCToRevive;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_1 = CallFunc_GetLocalPlayerFromController_ReturnValue_1;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_NpcComponent = K2Node_CustomEvent_NpcComponent;
	Parms.K2Node_CustomEvent_NPC_Actor = K2Node_CustomEvent_NPC_Actor;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_GroupId = K2Node_CustomEvent_GroupId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGroupSystem_GroupComponent = CallFunc_GetGroupSystem_GroupComponent;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_GetGroupName_ReturnValue = CallFunc_GetGroupName_ReturnValue;
	Parms.K2Node_CustomEvent_NewItem = K2Node_CustomEvent_NewItem;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_PlacementStructureAssetRef = K2Node_CustomEvent_PlacementStructureAssetRef;
	Parms.K2Node_Event_StructureAssetRef = K2Node_Event_StructureAssetRef;
	Parms.K2Node_Event_IsAdding_1 = K2Node_Event_IsAdding_1;
	Parms.K2Node_Event_CraftingRecipeRef = K2Node_Event_CraftingRecipeRef;
	Parms.K2Node_Event_IsAdding = K2Node_Event_IsAdding;
	Parms.K2Node_CustomEvent_Window = K2Node_CustomEvent_Window;
	Parms.CallFunc_OpenWindowFromKey_Window = CallFunc_OpenWindowFromKey_Window;
	Parms.K2Node_Event_Key = K2Node_Event_Key;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue_1 = CallFunc_GetNWXPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_2 = CallFunc_GetLocalPlayerFromController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBuilding_Interface = K2Node_DynamicCast_AsBuilding_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue_2 = CallFunc_GetNWXPlayerController_ReturnValue_2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue_3 = CallFunc_GetNWXPlayerController_ReturnValue_3;
	Parms.K2Node_CustomEvent_TitleText = K2Node_CustomEvent_TitleText;
	Parms.K2Node_CustomEvent_BodyText = K2Node_CustomEvent_BodyText;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_1 = CallFunc_GetLocalPlayerController_LocalPlayerController_1;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_3 = CallFunc_GetLocalPlayerFromController_ReturnValue_3;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_FindFirstImplementor_ReturnValue_1 = CallFunc_FindFirstImplementor_ReturnValue_1;
	Parms.CallFunc_ScreenShotDir_ReturnValue = CallFunc_ScreenShotDir_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IssueReportWindowCurrentlyOpen_ReturnValue = CallFunc_IssueReportWindowCurrentlyOpen_ReturnValue;
	Parms.K2Node_CustomEvent_Structure = K2Node_CustomEvent_Structure;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_2 = CallFunc_GetLocalPlayerController_LocalPlayerController_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue_4 = CallFunc_GetLocalPlayerFromController_ReturnValue_4;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.RevivingNPC__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Creature_NPC_Human_C*    RevivedNPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::RevivingNPC__DelegateSignature(class ABP_Creature_NPC_Human_C* RevivedNPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "RevivingNPC__DelegateSignature");

	Params::UBP_UIMenusComponent_C_RevivingNPC__DelegateSignature_Params Parms{};

	Parms.RevivedNPC = RevivedNPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.UnlockedRecipesReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UnlockedRecipes          SUnlockedRecipes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::UnlockedRecipesReady__DelegateSignature(const struct FS_UnlockedRecipes& SUnlockedRecipes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "UnlockedRecipesReady__DelegateSignature");

	Params::UBP_UIMenusComponent_C_UnlockedRecipesReady__DelegateSignature_Params Parms{};

	Parms.SUnlockedRecipes = SUnlockedRecipes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.UnlockedSchematicsReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UnlockedSchematics       SUnlockedSchematics                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::UnlockedSchematicsReady__DelegateSignature(const struct FS_UnlockedSchematics& SUnlockedSchematics)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "UnlockedSchematicsReady__DelegateSignature");

	Params::UBP_UIMenusComponent_C_UnlockedSchematicsReady__DelegateSignature_Params Parms{};

	Parms.SUnlockedSchematics = SUnlockedSchematics;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.GroupDetailsReturned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::GroupDetailsReturned__DelegateSignature(const class FString& ID, const class FString& Name, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "GroupDetailsReturned__DelegateSignature");

	Params::UBP_UIMenusComponent_C_GroupDetailsReturned__DelegateSignature_Params Parms{};

	Parms.ID = ID;
	Parms.Name = Name;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.JoinDeploymentRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      RequestingController                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UIMenusComponent_C::JoinDeploymentRequest__DelegateSignature(const class FString& ID, class ABP_PlayerController_C* RequestingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "JoinDeploymentRequest__DelegateSignature");

	Params::UBP_UIMenusComponent_C_JoinDeploymentRequest__DelegateSignature_Params Parms{};

	Parms.ID = ID;
	Parms.RequestingController = RequestingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.Event_OnDialogueClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIMenusComponent_C::Event_OnDialogueClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "Event_OnDialogueClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIMenusComponent.BP_UIMenusComponent_C.CreateRealmRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 RequestingController                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRealmRecipe                RealmRecipe                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_UIMenusComponent_C::CreateRealmRequest__DelegateSignature(class AController* RequestingController, const struct FRealmRecipe& RealmRecipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIMenusComponent_C", "CreateRealmRequest__DelegateSignature");

	Params::UBP_UIMenusComponent_C_CreateRealmRequest__DelegateSignature_Params Parms{};

	Parms.RequestingController = RequestingController;
	Parms.RealmRecipe = RealmRecipe;

	UObject::ProcessEvent(Func, &Parms);

}

}


