#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C
// (None)

class UClass* UWid_DialogueTimelinePayload_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DialogueTimelinePayload_Entry_C");

	return Clss;
}


// wid_DialogueTimelinePayload_Entry_C wid_DialogueTimelinePayload_Entry.Default__wid_DialogueTimelinePayload_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DialogueTimelinePayload_Entry_C* UWid_DialogueTimelinePayload_Entry_C::GetDefaultObj()
{
	static class UWid_DialogueTimelinePayload_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DialogueTimelinePayload_Entry_C*>(UWid_DialogueTimelinePayload_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.UpdateTypeface
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              Font                                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// enum class EBasicResultType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueTimelinePayload_Entry_C::UpdateTypeface(const struct FSlateFontInfo& Font, enum class EBasicResultType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, bool Temp_bool_Variable, class FName Temp_name_Variable_3, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_Entry_C", "UpdateTypeface");

	Params::UWid_DialogueTimelinePayload_Entry_C_UpdateTypeface_Params Parms{};

	Parms.Font = Font;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EBasicResultType        ReactionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueTimelinePayload_Entry_C::Update(class FText Text, enum class EBasicResultType ReactionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_Entry_C", "Update");

	Params::UWid_DialogueTimelinePayload_Entry_C_Update_Params Parms{};

	Parms.Text = Text;
	Parms.ReactionType = ReactionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.GetReactionColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_Entry_C::GetReactionColor(struct FLinearColor* Color, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_Entry_C", "GetReactionColor");

	Params::UWid_DialogueTimelinePayload_Entry_C_GetReactionColor_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.SetReactionType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBasicResultType        ReactionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetReactionColor_Color                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)

void UWid_DialogueTimelinePayload_Entry_C::SetReactionType(enum class EBasicResultType ReactionType, const struct FLinearColor& CallFunc_GetReactionColor_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_Entry_C", "SetReactionType");

	Params::UWid_DialogueTimelinePayload_Entry_C_SetReactionType_Params Parms{};

	Parms.ReactionType = ReactionType;
	Parms.CallFunc_GetReactionColor_Color = CallFunc_GetReactionColor_Color;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_DialogueTimelinePayload_Entry_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_Entry_C", "SetText");

	Params::UWid_DialogueTimelinePayload_Entry_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_Entry_C", "PreConstruct");

	Params::UWid_DialogueTimelinePayload_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueTimelinePayload_Entry.wid_DialogueTimelinePayload_Entry_C.ExecuteUbergraph_wid_DialogueTimelinePayload_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueTimelinePayload_Entry_C::ExecuteUbergraph_wid_DialogueTimelinePayload_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueTimelinePayload_Entry_C", "ExecuteUbergraph_wid_DialogueTimelinePayload_Entry");

	Params::UWid_DialogueTimelinePayload_Entry_C_ExecuteUbergraph_wid_DialogueTimelinePayload_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


