#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SaveGameSlot.SaveGameSlot_C
// (None)

class UClass* USaveGameSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveGameSlot_C");

	return Clss;
}


// SaveGameSlot_C SaveGameSlot.Default__SaveGameSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USaveGameSlot_C* USaveGameSlot_C::GetDefaultObj()
{
	static class USaveGameSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveGameSlot_C*>(USaveGameSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveGameSlot.SaveGameSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (None)

struct FEventReply USaveGameSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& K2Node_MakeStruct_EventReply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "OnMouseButtonDown");

	Params::USaveGameSlot_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SaveGameSlot.SaveGameSlot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USaveGameSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "OnMouseEnter");

	Params::USaveGameSlot_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveGameSlot.SaveGameSlot_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USaveGameSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "OnMouseLeave");

	Params::USaveGameSlot_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveGameSlot.SaveGameSlot_C.Deselect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USaveGameSlot_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SaveGameSlot.SaveGameSlot_C.Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AutoSelect                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveGameSlot_C::Select(bool AutoSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "Select");

	Params::USaveGameSlot_C_Select_Params Parms{};

	Parms.AutoSelect = AutoSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveGameSlot.SaveGameSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveGameSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "PreConstruct");

	Params::USaveGameSlot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveGameSlot.SaveGameSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USaveGameSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SaveGameSlot.SaveGameSlot_C.SetCurrent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USaveGameSlot_C::SetCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "SetCurrent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SaveGameSlot.SaveGameSlot_C.ExecuteUbergraph_SaveGameSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// bool                               K2Node_CustomEvent_AutoSelect                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSlotInfoSaveGame_SaveGameName                        (ZeroConstructor, HasGetValueTypeHash)
// class UEMSInfoSaveGame*            CallFunc_GetSlotInfoSaveGame_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_ImportSaveThumbnail_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USaveGameSlot_C::ExecuteUbergraph_SaveGameSlot(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_CustomEvent_AutoSelect, const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UTexture2D* CallFunc_ImportSaveThumbnail_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "ExecuteUbergraph_SaveGameSlot");

	Params::USaveGameSlot_C_ExecuteUbergraph_SaveGameSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_CustomEvent_AutoSelect = K2Node_CustomEvent_AutoSelect;
	Parms.CallFunc_GetSlotInfoSaveGame_SaveGameName = CallFunc_GetSlotInfoSaveGame_SaveGameName;
	Parms.CallFunc_GetSlotInfoSaveGame_ReturnValue = CallFunc_GetSlotInfoSaveGame_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_ImportSaveThumbnail_ReturnValue = CallFunc_ImportSaveThumbnail_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveGameSlot.SaveGameSlot_C.SetSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGameSlot_C*             SaveSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void USaveGameSlot_C::SetSelected__DelegateSignature(class USaveGameSlot_C* SaveSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveGameSlot_C", "SetSelected__DelegateSignature");

	Params::USaveGameSlot_C_SetSelected__DelegateSignature_Params Parms{};

	Parms.SaveSlot = SaveSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


