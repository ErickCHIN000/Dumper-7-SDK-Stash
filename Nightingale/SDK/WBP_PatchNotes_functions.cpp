#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PatchNotes.WBP_PatchNotes_C
// (None)

class UClass* UWBP_PatchNotes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PatchNotes_C");

	return Clss;
}


// WBP_PatchNotes_C WBP_PatchNotes.Default__WBP_PatchNotes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PatchNotes_C* UWBP_PatchNotes_C::GetDefaultObj()
{
	static class UWBP_PatchNotes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PatchNotes_C*>(UWBP_PatchNotes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PatchNotes.WBP_PatchNotes_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PatchNotes_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PatchNotes_C", "GetDefaultFocusWidget");

	Params::UWBP_PatchNotes_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PatchNotes.WBP_PatchNotes_C.Get Patch Notes
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGetNewsResponse            Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOnlineServiceStatus        Status                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FNewsItem                   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PatchNotes_C::Get_Patch_Notes(struct FGetNewsResponse& Response, struct FOnlineServiceStatus& Status, const struct FNewsItem& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PatchNotes_C", "Get Patch Notes");

	Params::UWBP_PatchNotes_C_Get_Patch_Notes_Params Parms{};

	Parms.Response = Response;
	Parms.Status = Status;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PatchNotes.WBP_PatchNotes_C.MOTD_Original
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGetMessageOfTheDayResponse Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOnlineServiceStatus        Status                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PatchNotes_C::MOTD_Original(struct FGetMessageOfTheDayResponse& Response, struct FOnlineServiceStatus& Status, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PatchNotes_C", "MOTD_Original");

	Params::UWBP_PatchNotes_C_MOTD_Original_Params Parms{};

	Parms.Response = Response;
	Parms.Status = Status;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PatchNotes.WBP_PatchNotes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PatchNotes_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PatchNotes_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PatchNotes.WBP_PatchNotes_C.BndEvt__WBP_button_base_293_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PatchNotes_C::BndEvt__WBP_button_base_293_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PatchNotes_C", "BndEvt__WBP_button_base_293_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PatchNotes.WBP_PatchNotes_C.ExecuteUbergraph_WBP_PatchNotes
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGetNewsRequest             K2Node_MakeStruct_GetNewsRequest                                 (NoDestructor)

void UWBP_PatchNotes_C::ExecuteUbergraph_WBP_PatchNotes(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGetNewsRequest& K2Node_MakeStruct_GetNewsRequest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PatchNotes_C", "ExecuteUbergraph_WBP_PatchNotes");

	Params::UWBP_PatchNotes_C_ExecuteUbergraph_WBP_PatchNotes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_GetNewsRequest = K2Node_MakeStruct_GetNewsRequest;

	UObject::ProcessEvent(Func, &Parms);

}

}


