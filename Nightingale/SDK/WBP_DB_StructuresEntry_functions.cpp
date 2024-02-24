#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C
// (None)

class UClass* UWBP_DB_StructuresEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_StructuresEntry_C");

	return Clss;
}


// WBP_DB_StructuresEntry_C WBP_DB_StructuresEntry.Default__WBP_DB_StructuresEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_StructuresEntry_C* UWBP_DB_StructuresEntry_C::GetDefaultObj()
{
	static class UWBP_DB_StructuresEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_StructuresEntry_C*>(UWBP_DB_StructuresEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C.GetTooltipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_Tooltip_SchematicRecipe_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_DB_StructuresEntry_C::GetTooltipWidget_0(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_DB_Tooltip_SchematicRecipe_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_StructuresEntry_C", "GetTooltipWidget_0");

	Params::UWBP_DB_StructuresEntry_C_GetTooltipWidget_0_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_StructuresEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_StructuresEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C.BndEvt__WBP_button_text_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_StructuresEntry_C::BndEvt__WBP_button_text_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_StructuresEntry_C", "BndEvt__WBP_button_text_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_StructuresEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_StructuresEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_StructuresEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_StructuresEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_StructuresEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_StructuresEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_StructuresEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_StructuresEntry_C", "PreConstruct");

	Params::UWBP_DB_StructuresEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C.ExecuteUbergraph_WBP_DB_StructuresEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UIMenusComponent_C*      CallFunc_GetLocalPlayerMenusComponent_MenusComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureDataFromStructureAssetReference_IsValid     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureDataFromStructureAssetReference_OutData     (ContainsInstancedReference)

void UWBP_DB_StructuresEntry_C::ExecuteUbergraph_WBP_DB_StructuresEntry(int32 EntryPoint, class UBP_UIMenusComponent_C* CallFunc_GetLocalPlayerMenusComponent_MenusComponent, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_StructuresEntry_C", "ExecuteUbergraph_WBP_DB_StructuresEntry");

	Params::UWBP_DB_StructuresEntry_C_ExecuteUbergraph_WBP_DB_StructuresEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerMenusComponent_MenusComponent = CallFunc_GetLocalPlayerMenusComponent_MenusComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_IsValid = CallFunc_GetStructureDataFromStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_OutData = CallFunc_GetStructureDataFromStructureAssetReference_OutData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_StructuresEntry.WBP_DB_StructuresEntry_C.OnStructurePlaced__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_StructuresEntry_C::OnStructurePlaced__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_StructuresEntry_C", "OnStructurePlaced__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


