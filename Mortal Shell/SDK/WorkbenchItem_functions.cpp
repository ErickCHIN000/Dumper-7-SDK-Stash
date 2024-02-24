#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WorkbenchItem.WorkbenchItem_C
// (None)

class UClass* UWorkbenchItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorkbenchItem_C");

	return Clss;
}


// WorkbenchItem_C WorkbenchItem.Default__WorkbenchItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWorkbenchItem_C* UWorkbenchItem_C::GetDefaultObj()
{
	static class UWorkbenchItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorkbenchItem_C*>(UWorkbenchItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WorkbenchItem.WorkbenchItem_C.SetHighlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Highlight                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)

void UWorkbenchItem_C::SetHighlight(bool Highlight, bool Local_Highlight, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "SetHighlight");

	Params::UWorkbenchItem_C_SetHighlight_Params Parms{};

	Parms.Highlight = Highlight;
	Parms.Local_Highlight = Local_Highlight;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorkbenchItem.WorkbenchItem_C.GetMaxUpgradeLevelDependingOnNG
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWorkbenchItem_C::GetMaxUpgradeLevelDependingOnNG(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "GetMaxUpgradeLevelDependingOnNG");

	Params::UWorkbenchItem_C_GetMaxUpgradeLevelDependingOnNG_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WorkbenchItem.WorkbenchItem_C.IsNotCurrentWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWorkbenchItem_C::IsNotCurrentWeapon(bool K2Node_SwitchEnum_CmpSuccess, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "IsNotCurrentWeapon");

	Params::UWorkbenchItem_C_IsNotCurrentWeapon_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WorkbenchItem.WorkbenchItem_C.GetUpgradeID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        UpgradeID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWorkbenchItemType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeNameWeaponSuper_UpgradeName                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWorkbenchItem_C::GetUpgradeID(class FName* UpgradeID, enum class EWorkbenchItemType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "GetUpgradeID");

	Params::UWorkbenchItem_C_GetUpgradeID_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_GetUpgradeNameWeaponSuper_UpgradeName = CallFunc_GetUpgradeNameWeaponSuper_UpgradeName;
	Parms.CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1 = CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeID != nullptr)
		*UpgradeID = Parms.UpgradeID;

}


// Function WorkbenchItem.WorkbenchItem_C.HasItemToUnlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bHasIt                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWorkbenchItem_C::HasItemToUnlock(bool* bHasIt, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "HasItemToUnlock");

	Params::UWorkbenchItem_C_HasItemToUnlock_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasIt != nullptr)
		*bHasIt = Parms.bHasIt;

}


// Function WorkbenchItem.WorkbenchItem_C.IsUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bUnlocked                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWorkbenchItemType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetEnumeratorName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUpgradeNameWeaponSuper_UpgradeName                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWorkbenchItem_C::IsUnlocked(bool* bUnlocked, enum class EWorkbenchItemType Temp_byte_Variable, bool Temp_bool_Variable, int32 CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class FName CallFunc_GetEnumeratorName_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_IsUpgradeUnlocked_bUnlocked, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked_2, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "IsUnlocked");

	Params::UWorkbenchItem_C_IsUnlocked_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue = CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorName_ReturnValue = CallFunc_GetEnumeratorName_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value_2 = CallFunc_GetNamedPCInt_Value_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_GetUpgradeNameWeaponSuper_UpgradeName = CallFunc_GetUpgradeNameWeaponSuper_UpgradeName;
	Parms.CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1 = CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_1 = CallFunc_IsUpgradeUnlocked_bUnlocked_1;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_2 = CallFunc_IsUpgradeUnlocked_bUnlocked_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (bUnlocked != nullptr)
		*bUnlocked = Parms.bUnlocked;

}


// Function WorkbenchItem.WorkbenchItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWorkbenchItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "PreConstruct");

	Params::UWorkbenchItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorkbenchItem.WorkbenchItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.SetHighlighted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWorkbenchItem_C::SetHighlighted(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "SetHighlighted");

	Params::UWorkbenchItem_C_SetHighlighted_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorkbenchItem.WorkbenchItem_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.Unlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::Unlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "Unlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.UpdateName
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::UpdateName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "UpdateName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.SetForceHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForceHide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWorkbenchItem_C::SetForceHide(bool bForceHide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "SetForceHide");

	Params::UWorkbenchItem_C_SetForceHide_Params Parms{};

	Parms.bForceHide = bForceHide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorkbenchItem.WorkbenchItem_C.ExecuteUbergraph_WorkbenchItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWorkbenchItemType      Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// enum class EWorkbenchItemType      Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bHighlighted                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUnlocked_bUnlocked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeNameWeaponSuper_UpgradeName                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItemToUnlock_bHasIt                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInventoryItem_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNotCurrentWeapon_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetEnumeratorName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               K2Node_CustomEvent_bForceHide                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNotCurrentWeapon_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWorkbenchItem_C::ExecuteUbergraph_WorkbenchItem(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EWorkbenchItemType Temp_byte_Variable_2, class FText Temp_text_Variable, enum class EWorkbenchItemType Temp_byte_Variable_3, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_bHighlighted, bool CallFunc_IsUnlocked_bUnlocked, const struct FInventoryItem& CallFunc_GetItemFromID_Item, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1, bool CallFunc_HasItemToUnlock_bHasIt, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_RemoveInventoryItem_Success, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_IsNotCurrentWeapon_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_GetEnumeratorName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName K2Node_Select_Default, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1, bool K2Node_CustomEvent_bForceHide, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, int32 CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default_3, bool CallFunc_IsNotCurrentWeapon_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "ExecuteUbergraph_WorkbenchItem");

	Params::UWorkbenchItem_C_ExecuteUbergraph_WorkbenchItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_bHighlighted = K2Node_CustomEvent_bHighlighted;
	Parms.CallFunc_IsUnlocked_bUnlocked = CallFunc_IsUnlocked_bUnlocked;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_GetUpgradeNameWeaponSuper_UpgradeName = CallFunc_GetUpgradeNameWeaponSuper_UpgradeName;
	Parms.CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1 = CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1;
	Parms.CallFunc_HasItemToUnlock_bHasIt = CallFunc_HasItemToUnlock_bHasIt;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_RemoveInventoryItem_Success = CallFunc_RemoveInventoryItem_Success;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsNotCurrentWeapon_ReturnValue = CallFunc_IsNotCurrentWeapon_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetEnumeratorName_ReturnValue = CallFunc_GetEnumeratorName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_bForceHide = K2Node_CustomEvent_bForceHide;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue = CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_IsNotCurrentWeapon_ReturnValue_1 = CallFunc_IsNotCurrentWeapon_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorkbenchItem.WorkbenchItem_C.ItemUnlocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWorkbenchItem_C::ItemUnlocked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "ItemUnlocked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorkbenchItem.WorkbenchItem_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWorkbenchItem_C::OnItemClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "OnItemClicked__DelegateSignature");

	Params::UWorkbenchItem_C_OnItemClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorkbenchItem.WorkbenchItem_C.OnItemReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWorkbenchItem_C::OnItemReleased__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "OnItemReleased__DelegateSignature");

	Params::UWorkbenchItem_C_OnItemReleased__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorkbenchItem.WorkbenchItem_C.OnItemPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWorkbenchItem_C::OnItemPressed__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "OnItemPressed__DelegateSignature");

	Params::UWorkbenchItem_C_OnItemPressed__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorkbenchItem.WorkbenchItem_C.OnItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWorkbenchItem_C::OnItemUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "OnItemUnhovered__DelegateSignature");

	Params::UWorkbenchItem_C_OnItemUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorkbenchItem.WorkbenchItem_C.OnItemHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWorkbenchItem_C::OnItemHover__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorkbenchItem_C", "OnItemHover__DelegateSignature");

	Params::UWorkbenchItem_C_OnItemHover__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


