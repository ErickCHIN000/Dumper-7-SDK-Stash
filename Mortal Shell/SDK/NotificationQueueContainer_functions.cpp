#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NotificationQueueContainer.NotificationQueueContainer_C
// (None)

class UClass* UNotificationQueueContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotificationQueueContainer_C");

	return Clss;
}


// NotificationQueueContainer_C NotificationQueueContainer.Default__NotificationQueueContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotificationQueueContainer_C* UNotificationQueueContainer_C::GetDefaultObj()
{
	static class UNotificationQueueContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotificationQueueContainer_C*>(UNotificationQueueContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NotificationQueueContainer.NotificationQueueContainer_C.CreateNotification_StormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LastUnlockedTier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Progress                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_UnlockedTier                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotification_StormMode_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::CreateNotification_StormMode(class FName ID, int32 LastUnlockedTier, float Progress, float Local_Progress, int32 Local_UnlockedTier, class FName Local_ID, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UNotification_StormMode_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "CreateNotification_StormMode");

	Params::UNotificationQueueContainer_C_CreateNotification_StormMode_Params Parms{};

	Parms.ID = ID;
	Parms.LastUnlockedTier = LastUnlockedTier;
	Parms.Progress = Progress;
	Parms.Local_Progress = Local_Progress;
	Parms.Local_UnlockedTier = Local_UnlockedTier;
	Parms.Local_ID = Local_ID;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.SetWeaponDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)

void UNotificationQueueContainer_C::SetWeaponDetails(enum class EComboTypes Weapon, int32 Local_Index, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FToolTipInfo& CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "SetWeaponDetails");

	Params::UNotificationQueueContainer_C_SetWeaponDetails_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Local_Index = Local_Index;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.GetShellIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsNameKnown                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CurrentShell                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UNotificationQueueContainer_C::GetShellIcon(bool IsNameKnown, enum class EArmorTypes CurrentShell, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, bool Temp_bool_Variable, enum class EArmorTypes Temp_byte_Variable, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, enum class EArmorTypes Temp_byte_Variable_1, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1, class UTexture2D* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "GetShellIcon");

	Params::UNotificationQueueContainer_C_GetShellIcon_Params Parms{};

	Parms.IsNameKnown = IsNameKnown;
	Parms.CurrentShell = CurrentShell;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.SetShellRetrievedDetails
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EArmorTypes             ShellRetrieved                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Shell                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetShellIcon_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)

void UNotificationQueueContainer_C::SetShellRetrievedDetails(class FText& ShellName, class FText ShellTagline, enum class EArmorTypes ShellRetrieved, enum class EArmorTypes* Shell, bool CallFunc_IsShellNameKnown_bKnown, class UTexture2D* CallFunc_GetShellIcon_ReturnValue, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "SetShellRetrievedDetails");

	Params::UNotificationQueueContainer_C_SetShellRetrievedDetails_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;
	Parms.ShellRetrieved = ShellRetrieved;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_GetShellIcon_ReturnValue = CallFunc_GetShellIcon_ReturnValue;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (Shell != nullptr)
		*Shell = Parms.Shell;

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.CreateNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsShellNotify                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsShellRenouncedNotify                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyType         NotifyType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CurrentArmor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNotification_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::CreateNotification(bool IsShellNotify, bool IsShellRenouncedNotify, enum class Enum_NotifyType NotifyType, enum class EArmorTypes CurrentArmor, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UNotification_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "CreateNotification");

	Params::UNotificationQueueContainer_C_CreateNotification_Params Parms{};

	Parms.IsShellNotify = IsShellNotify;
	Parms.IsShellRenouncedNotify = IsShellRenouncedNotify;
	Parms.NotifyType = NotifyType;
	Parms.CurrentArmor = CurrentArmor;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.SetUsedItemDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                ItemTooltip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              PreviousFamiliarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentFamiliarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::SetUsedItemDetails(const struct FToolTipInfo& ItemTooltip, int32 PreviousFamiliarity, int32 NewFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "SetUsedItemDetails");

	Params::UNotificationQueueContainer_C_SetUsedItemDetails_Params Parms{};

	Parms.ItemTooltip = ItemTooltip;
	Parms.PreviousFamiliarity = PreviousFamiliarity;
	Parms.NewFamiliarity = NewFamiliarity;
	Parms.CurrentFamiliarity = CurrentFamiliarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.SetGenericNotificationDetails
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                Tooltip                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        NotificationText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowFamiliarity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLastDiamong                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PreviousFamiliarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentFamiliarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsShellNotify                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotificationQueueContainer_C::SetGenericNotificationDetails(const struct FToolTipInfo& Tooltip, class FText NotificationText, bool ShowFamiliarity, bool AnimateLastDiamong, int32 PreviousFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, bool* IsShellNotify, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "SetGenericNotificationDetails");

	Params::UNotificationQueueContainer_C_SetGenericNotificationDetails_Params Parms{};

	Parms.Tooltip = Tooltip;
	Parms.NotificationText = NotificationText;
	Parms.ShowFamiliarity = ShowFamiliarity;
	Parms.AnimateLastDiamong = AnimateLastDiamong;
	Parms.PreviousFamiliarity = PreviousFamiliarity;
	Parms.CurrentFamiliarity = CurrentFamiliarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsShellNotify != nullptr)
		*IsShellNotify = Parms.IsShellNotify;

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.SetAcquiredItemDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                ItemTooltip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Familiarity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::SetAcquiredItemDetails(const struct FToolTipInfo& ItemTooltip, int32 Familiarity, int32 MaxFamiliarity, class FName ID, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "SetAcquiredItemDetails");

	Params::UNotificationQueueContainer_C_SetAcquiredItemDetails_Params Parms{};

	Parms.ItemTooltip = ItemTooltip;
	Parms.Familiarity = Familiarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.ID = ID;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.SetShellEquippedDetails
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsDarkForm                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Shell                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetShellIcon_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)

void UNotificationQueueContainer_C::SetShellEquippedDetails(class FText& ShellName, class FText ShellTagline, bool* IsDarkForm, enum class EArmorTypes* Shell, bool CallFunc_IsShellNameKnown_bKnown, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UTexture2D* CallFunc_GetShellIcon_ReturnValue, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "SetShellEquippedDetails");

	Params::UNotificationQueueContainer_C_SetShellEquippedDetails_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetShellIcon_ReturnValue = CallFunc_GetShellIcon_ReturnValue;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDarkForm != nullptr)
		*IsDarkForm = Parms.IsDarkForm;

	if (Shell != nullptr)
		*Shell = Parms.Shell;

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.SetNewFamiliarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                ToolTipInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_AddFamiliarity_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::SetNewFamiliarity(struct FToolTipInfo& ToolTipInfo, int32 CallFunc_AddFamiliarity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "SetNewFamiliarity");

	Params::UNotificationQueueContainer_C_SetNewFamiliarity_Params Parms{};

	Parms.ToolTipInfo = ToolTipInfo;
	Parms.CallFunc_AddFamiliarity_ReturnValue = CallFunc_AddFamiliarity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.AddFamiliarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FToolTipInfo                ToolTipInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UNotificationQueueContainer_C::AddFamiliarity(struct FToolTipInfo& ToolTipInfo, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "AddFamiliarity");

	Params::UNotificationQueueContainer_C_AddFamiliarity_Params Parms{};

	Parms.ToolTipInfo = ToolTipInfo;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.SetFamiliarityAndDetermineIfWeNeedToAnimateLastDiamond
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PreviousFamiliarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentFamiliarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_NewFamiliarity                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_PreviousFamiliarity                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_MaxFamiliarity                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_CurrentFamiliarity                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::SetFamiliarityAndDetermineIfWeNeedToAnimateLastDiamond(int32 PreviousFamiliarity, int32 NewFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, int32 Local_NewFamiliarity, int32 Local_PreviousFamiliarity, int32 Local_MaxFamiliarity, int32 Local_CurrentFamiliarity, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_NormalizeToRange_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_NormalizeToRange_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "SetFamiliarityAndDetermineIfWeNeedToAnimateLastDiamond");

	Params::UNotificationQueueContainer_C_SetFamiliarityAndDetermineIfWeNeedToAnimateLastDiamond_Params Parms{};

	Parms.PreviousFamiliarity = PreviousFamiliarity;
	Parms.NewFamiliarity = NewFamiliarity;
	Parms.CurrentFamiliarity = CurrentFamiliarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.Local_NewFamiliarity = Local_NewFamiliarity;
	Parms.Local_PreviousFamiliarity = Local_PreviousFamiliarity;
	Parms.Local_MaxFamiliarity = Local_MaxFamiliarity;
	Parms.Local_CurrentFamiliarity = Local_CurrentFamiliarity;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_NormalizeToRange_ReturnValue_1 = CallFunc_NormalizeToRange_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_NormalizeToRange_ReturnValue_2 = CallFunc_NormalizeToRange_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_5 = CallFunc_Conv_IntToString_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.GetLastNotificationPos
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UNotificationQueueContainer_C::GetLastNotificationPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "GetLastNotificationPos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnItemFamiliarityChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                Tooltip                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              PreviousFamiliarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentFamiliarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::OnItemFamiliarityChanged_Set(const struct FToolTipInfo& Tooltip, int32 PreviousFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnItemFamiliarityChanged_Set");

	Params::UNotificationQueueContainer_C_OnItemFamiliarityChanged_Set_Params Parms{};

	Parms.Tooltip = Tooltip;
	Parms.PreviousFamiliarity = PreviousFamiliarity;
	Parms.CurrentFamiliarity = CurrentFamiliarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnItemAcquired_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Familiarity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::OnItemAcquired_Set(const struct FToolTipInfo& InventoryItem, int32 Familiarity, int32 MaxFamiliarity, class FName ID, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnItemAcquired_Set");

	Params::UNotificationQueueContainer_C_OnItemAcquired_Set_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.Familiarity = Familiarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.ID = ID;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnShellEquipped_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotificationQueueContainer_C::OnShellEquipped_Set(class FText ShellName, class FText ShellTagline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnShellEquipped_Set");

	Params::UNotificationQueueContainer_C_OnShellEquipped_Set_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnGenericNotification_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                Tooltip                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        NotificationText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowFamiliarity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLastDiamond                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PreviousFamiliarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentFamiliarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::OnGenericNotification_Set(const struct FToolTipInfo& Tooltip, class FText NotificationText, bool ShowFamiliarity, bool AnimateLastDiamond, int32 PreviousFamiliarity, int32 CurrentFamiliarity, int32 MaxFamiliarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnGenericNotification_Set");

	Params::UNotificationQueueContainer_C_OnGenericNotification_Set_Params Parms{};

	Parms.Tooltip = Tooltip;
	Parms.NotificationText = NotificationText;
	Parms.ShowFamiliarity = ShowFamiliarity;
	Parms.AnimateLastDiamond = AnimateLastDiamond;
	Parms.PreviousFamiliarity = PreviousFamiliarity;
	Parms.CurrentFamiliarity = CurrentFamiliarity;
	Parms.MaxFamiliarity = MaxFamiliarity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnItemFamiliarityChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::OnItemFamiliarityChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnItemFamiliarityChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnItemAcquired_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::OnItemAcquired_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnItemAcquired_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnShellEquipped_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::OnShellEquipped_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnShellEquipped_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnGenericNotification_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::OnGenericNotification_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnGenericNotification_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnShellRetrieved_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::OnShellRetrieved_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnShellRetrieved_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnShellRetrieved_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EArmorTypes             ShellRetrieved                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::OnShellRetrieved_Set(class FText ShellName, class FText ShellTagline, enum class EArmorTypes ShellRetrieved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnShellRetrieved_Set");

	Params::UNotificationQueueContainer_C_OnShellRetrieved_Set_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;
	Parms.ShellRetrieved = ShellRetrieved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.Notify_Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::Notify_Removed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "Notify_Removed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnWeaponEquipped_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::OnWeaponEquipped_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnWeaponEquipped_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnWeaponEquipped_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChangingWeaponMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotificationQueueContainer_C::OnWeaponEquipped_Set(enum class EComboTypes Weapon, bool IsChangingWeaponMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnWeaponEquipped_Set");

	Params::UNotificationQueueContainer_C_OnWeaponEquipped_Set_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.IsChangingWeaponMode = IsChangingWeaponMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnWeaponEquipped_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::OnWeaponEquipped_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnWeaponEquipped_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.OnMilestoneUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LastUnlockedTier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationQueueContainer_C::OnMilestoneUnlocked(class FName ID, int32 LastUnlockedTier, float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "OnMilestoneUnlocked");

	Params::UNotificationQueueContainer_C_OnMilestoneUnlocked_Params Parms{};

	Parms.ID = ID;
	Parms.LastUnlockedTier = LastUnlockedTier;
	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.ExecuteUbergraph_NotificationQueueContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LastUnlockedTier                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Progress                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyType         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyType         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FToolTipInfo                K2Node_CustomEvent_ToolTip_1                                     (HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PreviousFamiliarity_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CurrentFamiliarity_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxFamiliarity_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ID_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FToolTipInfo                K2Node_CustomEvent_InventoryItem                                 (HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Familiarity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxFamiliarity_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ID_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ShellName_1                                   (None)
// class FText                        K2Node_CustomEvent_ShellTagline_1                                (None)
// struct FToolTipInfo                K2Node_CustomEvent_ToolTip                                       (HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NotificationText                              (None)
// bool                               K2Node_CustomEvent_ShowFamiliarity                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_AnimateLastDiamond                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_PreviousFamiliarity                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CurrentFamiliarity                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxFamiliarity                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetShellEquippedDetails_IsDarkForm                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_SetShellEquippedDetails_Shell                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGenericNotificationDetails_IsShellNotify             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyType         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ShellName                                     (None)
// class FText                        K2Node_CustomEvent_ShellTagline                                  (None)
// enum class EArmorTypes             K2Node_CustomEvent_ShellRetrieved                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_SetShellRetrievedDetails_Shell                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_CustomEvent_Weapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsChangingWeaponMode                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UStormModeNotifier_Component_C*CallFunc_GetNotifierComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)

void UNotificationQueueContainer_C::ExecuteUbergraph_NotificationQueueContainer(int32 EntryPoint, class FName K2Node_CustomEvent_ID, int32 K2Node_CustomEvent_LastUnlockedTier, float K2Node_CustomEvent_Progress, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class Enum_NotifyType Temp_byte_Variable, enum class Enum_NotifyType Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FToolTipInfo& K2Node_CustomEvent_ToolTip_1, int32 K2Node_CustomEvent_PreviousFamiliarity_1, int32 K2Node_CustomEvent_CurrentFamiliarity_1, int32 K2Node_CustomEvent_MaxFamiliarity_2, class FName K2Node_CustomEvent_ID_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, const struct FToolTipInfo& K2Node_CustomEvent_InventoryItem, int32 K2Node_CustomEvent_Familiarity, int32 K2Node_CustomEvent_MaxFamiliarity_1, class FName K2Node_CustomEvent_ID_1, int32 K2Node_CustomEvent_Amount, class FText K2Node_CustomEvent_ShellName_1, class FText K2Node_CustomEvent_ShellTagline_1, const struct FToolTipInfo& K2Node_CustomEvent_ToolTip, class FText K2Node_CustomEvent_NotificationText, bool K2Node_CustomEvent_ShowFamiliarity, bool K2Node_CustomEvent_AnimateLastDiamond, int32 K2Node_CustomEvent_PreviousFamiliarity, int32 K2Node_CustomEvent_CurrentFamiliarity, int32 K2Node_CustomEvent_MaxFamiliarity, bool CallFunc_SetShellEquippedDetails_IsDarkForm, enum class EArmorTypes CallFunc_SetShellEquippedDetails_Shell, bool CallFunc_SetGenericNotificationDetails_IsShellNotify, enum class Enum_NotifyType K2Node_Select_Default, class FText K2Node_CustomEvent_ShellName, class FText K2Node_CustomEvent_ShellTagline, enum class EArmorTypes K2Node_CustomEvent_ShellRetrieved, enum class EArmorTypes CallFunc_SetShellRetrievedDetails_Shell, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, enum class EComboTypes K2Node_CustomEvent_Weapon, bool K2Node_CustomEvent_IsChangingWeaponMode, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetItemFamiliarity_Value, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UStormModeNotifier_Component_C* CallFunc_GetNotifierComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "ExecuteUbergraph_NotificationQueueContainer");

	Params::UNotificationQueueContainer_C_ExecuteUbergraph_NotificationQueueContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_CustomEvent_LastUnlockedTier = K2Node_CustomEvent_LastUnlockedTier;
	Parms.K2Node_CustomEvent_Progress = K2Node_CustomEvent_Progress;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_ToolTip_1 = K2Node_CustomEvent_ToolTip_1;
	Parms.K2Node_CustomEvent_PreviousFamiliarity_1 = K2Node_CustomEvent_PreviousFamiliarity_1;
	Parms.K2Node_CustomEvent_CurrentFamiliarity_1 = K2Node_CustomEvent_CurrentFamiliarity_1;
	Parms.K2Node_CustomEvent_MaxFamiliarity_2 = K2Node_CustomEvent_MaxFamiliarity_2;
	Parms.K2Node_CustomEvent_ID_2 = K2Node_CustomEvent_ID_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_InventoryItem = K2Node_CustomEvent_InventoryItem;
	Parms.K2Node_CustomEvent_Familiarity = K2Node_CustomEvent_Familiarity;
	Parms.K2Node_CustomEvent_MaxFamiliarity_1 = K2Node_CustomEvent_MaxFamiliarity_1;
	Parms.K2Node_CustomEvent_ID_1 = K2Node_CustomEvent_ID_1;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.K2Node_CustomEvent_ShellName_1 = K2Node_CustomEvent_ShellName_1;
	Parms.K2Node_CustomEvent_ShellTagline_1 = K2Node_CustomEvent_ShellTagline_1;
	Parms.K2Node_CustomEvent_ToolTip = K2Node_CustomEvent_ToolTip;
	Parms.K2Node_CustomEvent_NotificationText = K2Node_CustomEvent_NotificationText;
	Parms.K2Node_CustomEvent_ShowFamiliarity = K2Node_CustomEvent_ShowFamiliarity;
	Parms.K2Node_CustomEvent_AnimateLastDiamond = K2Node_CustomEvent_AnimateLastDiamond;
	Parms.K2Node_CustomEvent_PreviousFamiliarity = K2Node_CustomEvent_PreviousFamiliarity;
	Parms.K2Node_CustomEvent_CurrentFamiliarity = K2Node_CustomEvent_CurrentFamiliarity;
	Parms.K2Node_CustomEvent_MaxFamiliarity = K2Node_CustomEvent_MaxFamiliarity;
	Parms.CallFunc_SetShellEquippedDetails_IsDarkForm = CallFunc_SetShellEquippedDetails_IsDarkForm;
	Parms.CallFunc_SetShellEquippedDetails_Shell = CallFunc_SetShellEquippedDetails_Shell;
	Parms.CallFunc_SetGenericNotificationDetails_IsShellNotify = CallFunc_SetGenericNotificationDetails_IsShellNotify;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_ShellName = K2Node_CustomEvent_ShellName;
	Parms.K2Node_CustomEvent_ShellTagline = K2Node_CustomEvent_ShellTagline;
	Parms.K2Node_CustomEvent_ShellRetrieved = K2Node_CustomEvent_ShellRetrieved;
	Parms.CallFunc_SetShellRetrievedDetails_Shell = CallFunc_SetShellRetrievedDetails_Shell;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_CustomEvent_Weapon = K2Node_CustomEvent_Weapon;
	Parms.K2Node_CustomEvent_IsChangingWeaponMode = K2Node_CustomEvent_IsChangingWeaponMode;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetNotifierComponent_ReturnValue = CallFunc_GetNotifierComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotificationQueueContainer.NotificationQueueContainer_C.Notify_CountDecreased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotificationQueueContainer_C::Notify_CountDecreased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotificationQueueContainer_C", "Notify_CountDecreased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


