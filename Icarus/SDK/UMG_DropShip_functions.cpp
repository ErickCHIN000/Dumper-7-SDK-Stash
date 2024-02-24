#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropShip.UMG_DropShip_C
// (None)

class UClass* UUMG_DropShip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropShip_C");

	return Clss;
}


// UMG_DropShip_C UMG_DropShip.Default__UMG_DropShip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropShip_C* UUMG_DropShip_C::GetDefaultObj()
{
	static class UUMG_DropShip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropShip_C*>(UUMG_DropShip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropShip.UMG_DropShip_C.GetIcarusMap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTalentArchetypesRowHandle  Archetype                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetActiveProspectData_ReturnValue                       (ConstParm)
// bool                               CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropShip_C::GetIcarusMap(struct FTalentArchetypesRowHandle* Archetype, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "GetIcarusMap");

	Params::UUMG_DropShip_C_GetIcarusMap_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetActiveProspectData_ReturnValue = CallFunc_GetActiveProspectData_ReturnValue;
	Parms.CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue = CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1 = CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Archetype != nullptr)
		*Archetype = std::move(Parms.Archetype);

}


// Function UMG_DropShip.UMG_DropShip_C.IsHostWithClients
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropShip_C::IsHostWithClients(bool* Result, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocalPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "IsHostWithClients");

	Params::UUMG_DropShip_C_IsHostWithClients_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UMG_DropShip.UMG_DropShip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DropShip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropShip.UMG_DropShip_C.BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropShip_C::BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_DropShip_C_BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropShip.UMG_DropShip_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropShip_C::BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_DropShip_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropShip.UMG_DropShip_C.ReturnToStation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DropShip_C::ReturnToStation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "ReturnToStation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropShip.UMG_DropShip_C.HostConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DropShip_C::HostConfirmation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "HostConfirmation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropShip.UMG_DropShip_C.DoNothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DropShip_C::DoNothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "DoNothing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropShip.UMG_DropShip_C.BndEvt__UMG_DropShip_TakeAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_DropShip_C::BndEvt__UMG_DropShip_TakeAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "BndEvt__UMG_DropShip_TakeAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropShip.UMG_DropShip_C.ExecuteUbergraph_UMG_DropShip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectListRowHandle      CallFunc_GetActiveProspectRowHandle_ReturnValue                  (NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_wildcard_Variable                                           (None)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_IsHostWithClients_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails_1                     (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropShip_C::ExecuteUbergraph_UMG_DropShip(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FProspectListRowHandle& CallFunc_GetActiveProspectRowHandle_ReturnValue, class FText Temp_wildcard_Variable, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_MakeLiteralText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_IsHostWithClients_Result, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_1, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_3, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_4, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_4, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_3, bool K2Node_DynamicCast_bSuccess_4, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_3, bool K2Node_SwitchEnum_CmpSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_7, enum class EValid CallFunc_GetTrait_Paths_2, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_8, class UInventory* CallFunc_GetInventory_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropShip_C", "ExecuteUbergraph_UMG_DropShip");

	Params::UUMG_DropShip_C_ExecuteUbergraph_UMG_DropShip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetActiveProspectRowHandle_ReturnValue = CallFunc_GetActiveProspectRowHandle_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.CallFunc_GetInventory_ReturnValue_2 = CallFunc_GetInventory_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_IsHostWithClients_Result = CallFunc_IsHostWithClients_Result;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails_1 = K2Node_MakeStruct_ConfirmationPopupDetails_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_2 = CallFunc_GetIcarusPlayerController_IsValid_2;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget_1 = CallFunc_GetConfirmationWindow_ConfirmationWidget_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_3 = CallFunc_GetIcarusPlayerController_IsValid_3;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_3 = CallFunc_GetIcarusPlayerController_ReturnValue_3;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_4 = CallFunc_GetIcarusPlayerController_IsValid_4;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_4 = CallFunc_GetIcarusPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsUIController_Interface_2 = K2Node_DynamicCast_AsUIController_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsUIController_Interface_3 = K2Node_DynamicCast_AsUIController_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetUserInterface_UserInterface_2 = CallFunc_GetUserInterface_UserInterface_2;
	Parms.CallFunc_GetUserInterface_UserInterface_3 = CallFunc_GetUserInterface_UserInterface_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_GetTrait_Paths_2 = CallFunc_GetTrait_Paths_2;
	Parms.CallFunc_GetTrait_ReturnValue_2 = CallFunc_GetTrait_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.CallFunc_GetInventory_ReturnValue_3 = CallFunc_GetInventory_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


