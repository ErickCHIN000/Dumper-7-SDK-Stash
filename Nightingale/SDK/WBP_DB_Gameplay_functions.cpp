#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Gameplay.WBP_DB_Gameplay_C
// (None)

class UClass* UWBP_DB_Gameplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Gameplay_C");

	return Clss;
}


// WBP_DB_Gameplay_C WBP_DB_Gameplay.Default__WBP_DB_Gameplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Gameplay_C* UWBP_DB_Gameplay_C::GetDefaultObj()
{
	static class UWBP_DB_Gameplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Gameplay_C*>(UWBP_DB_Gameplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Gameplay.WBP_DB_Gameplay_C.OnChildTabClosedHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Gameplay_C::OnChildTabClosedHandler(class UNWXCommonWindowWidget* Window)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Gameplay_C", "OnChildTabClosedHandler");

	Params::UWBP_DB_Gameplay_C_OnChildTabClosedHandler_Params Parms{};

	Parms.Window = Window;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Gameplay.WBP_DB_Gameplay_C.OnPlacementHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_Gameplay_C::OnPlacementHandler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Gameplay_C", "OnPlacementHandler");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Gameplay.WBP_DB_Gameplay_C.TabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 LWidget                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_Gameplay_Structures_C*K2Node_DynamicCast_AsWBP_DB_Gameplay_Structures                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      K2Node_DynamicCast_AsNWXCommon_Window_Widget                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Gameplay_C::TabSelected(int32 Index, class UUserWidget* LWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_DB_Gameplay_Structures_C* K2Node_DynamicCast_AsWBP_DB_Gameplay_Structures, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNWXCommonWindowWidget* K2Node_DynamicCast_AsNWXCommon_Window_Widget, bool K2Node_DynamicCast_bSuccess_1, class UClass* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Gameplay_C", "TabSelected");

	Params::UWBP_DB_Gameplay_C_TabSelected_Params Parms{};

	Parms.Index = Index;
	Parms.LWidget = LWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_DB_Gameplay_Structures = K2Node_DynamicCast_AsWBP_DB_Gameplay_Structures;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsNWXCommon_Window_Widget = K2Node_DynamicCast_AsNWXCommon_Window_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Gameplay.WBP_DB_Gameplay_C.BndEvt__WBP_DB_Gameplay_Tabs_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        SelectedTabName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ActiveTab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Gameplay_C::BndEvt__WBP_DB_Gameplay_Tabs_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Gameplay_C", "BndEvt__WBP_DB_Gameplay_Tabs_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature");

	Params::UWBP_DB_Gameplay_C_BndEvt__WBP_DB_Gameplay_Tabs_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature_Params Parms{};

	Parms.SelectedTabName = SelectedTabName;
	Parms.ActiveTab = ActiveTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Gameplay.WBP_DB_Gameplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Gameplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Gameplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Gameplay.WBP_DB_Gameplay_C.ExecuteUbergraph_WBP_DB_Gameplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_SelectedTabName                       (None)
// int32                              K2Node_ComponentBoundEvent_ActiveTab                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGameplayTab_GameplayTab                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Gameplay_C::ExecuteUbergraph_WBP_DB_Gameplay(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetGameplayTab_GameplayTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Gameplay_C", "ExecuteUbergraph_WBP_DB_Gameplay");

	Params::UWBP_DB_Gameplay_C_ExecuteUbergraph_WBP_DB_Gameplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_SelectedTabName = K2Node_ComponentBoundEvent_SelectedTabName;
	Parms.K2Node_ComponentBoundEvent_ActiveTab = K2Node_ComponentBoundEvent_ActiveTab;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetGameplayTab_GameplayTab = CallFunc_GetGameplayTab_GameplayTab;

	UObject::ProcessEvent(Func, &Parms);

}

}


