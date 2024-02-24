#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C
// (None)

class UClass* UUMG_BioLab_UpgradeSlotChoice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BioLab_UpgradeSlotChoice_C");

	return Clss;
}


// UMG_BioLab_UpgradeSlotChoice_C UMG_BioLab_UpgradeSlotChoice.Default__UMG_BioLab_UpgradeSlotChoice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BioLab_UpgradeSlotChoice_C* UUMG_BioLab_UpgradeSlotChoice_C::GetDefaultObj()
{
	static class UUMG_BioLab_UpgradeSlotChoice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BioLab_UpgradeSlotChoice_C*>(UUMG_BioLab_UpgradeSlotChoice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.BndEvt__UMG_BioLab_UpgradeSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotChoice_C::BndEvt__UMG_BioLab_UpgradeSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotChoice_C", "BndEvt__UMG_BioLab_UpgradeSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.SetUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               IsCurrentChoice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BioLab_UpgradeSlotChoice_C::SetUpgrade(const struct FLivingItemUpgradesRowHandle& Upgrade, bool IsCurrentChoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotChoice_C", "SetUpgrade");

	Params::UUMG_BioLab_UpgradeSlotChoice_C_SetUpgrade_Params Parms{};

	Parms.Upgrade = Upgrade;
	Parms.IsCurrentChoice = IsCurrentChoice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotChoice_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotChoice_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotChoice_C::BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotChoice_C", "BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotChoice_C::BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotChoice_C", "BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.ExecuteUbergraph_UMG_BioLab_UpgradeSlotChoice
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_BioLab_Upgrade_Tooltip_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleK2Node_CustomEvent_Upgrade                                       (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsCurrentChoice                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLivingItemUpgradeData      CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades          (None)
// enum class EValid                  CallFunc_GetLivingItemUpgradesStruct_Paths                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BioLab_UpgradeSlotChoice_C::ExecuteUbergraph_UMG_BioLab_UpgradeSlotChoice(int32 EntryPoint, class UUMG_BioLab_Upgrade_Tooltip_C* CallFunc_Create_ReturnValue, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade, bool K2Node_CustomEvent_IsCurrentChoice, const struct FLivingItemUpgradeData& CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades, enum class EValid CallFunc_GetLivingItemUpgradesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotChoice_C", "ExecuteUbergraph_UMG_BioLab_UpgradeSlotChoice");

	Params::UUMG_BioLab_UpgradeSlotChoice_C_ExecuteUbergraph_UMG_BioLab_UpgradeSlotChoice_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Upgrade = K2Node_CustomEvent_Upgrade;
	Parms.K2Node_CustomEvent_IsCurrentChoice = K2Node_CustomEvent_IsCurrentChoice;
	Parms.CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades = CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades;
	Parms.CallFunc_GetLivingItemUpgradesStruct_Paths = CallFunc_GetLivingItemUpgradesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.ChoiceUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotChoice_C::ChoiceUnhovered__DelegateSignature(const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotChoice_C", "ChoiceUnhovered__DelegateSignature");

	Params::UUMG_BioLab_UpgradeSlotChoice_C_ChoiceUnhovered__DelegateSignature_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.ChoiceHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotChoice_C::ChoiceHovered__DelegateSignature(const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotChoice_C", "ChoiceHovered__DelegateSignature");

	Params::UUMG_BioLab_UpgradeSlotChoice_C_ChoiceHovered__DelegateSignature_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.UpgradeChoiceClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotChoice_C::UpgradeChoiceClicked__DelegateSignature(const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotChoice_C", "UpgradeChoiceClicked__DelegateSignature");

	Params::UUMG_BioLab_UpgradeSlotChoice_C_UpgradeChoiceClicked__DelegateSignature_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}

}


