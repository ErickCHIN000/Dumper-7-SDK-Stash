#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C
// (None)

class UClass* UUMG_SessionFilterCheckbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SessionFilterCheckbox_C");

	return Clss;
}


// UMG_SessionFilterCheckbox_C UMG_SessionFilterCheckbox.Default__UMG_SessionFilterCheckbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SessionFilterCheckbox_C* UUMG_SessionFilterCheckbox_C::GetDefaultObj()
{
	static class UUMG_SessionFilterCheckbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SessionFilterCheckbox_C*>(UUMG_SessionFilterCheckbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C.ManuallyCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESessionFilterState     Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SessionFilterCheckbox_C::ManuallyCheck(enum class ESessionFilterState Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SessionFilterCheckbox_C", "ManuallyCheck");

	Params::UUMG_SessionFilterCheckbox_C_ManuallyCheck_Params Parms{};

	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C.BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_SessionFilterCheckbox_C::BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SessionFilterCheckbox_C", "BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C.UpdateCheckbox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SessionFilterCheckbox_C::UpdateCheckbox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SessionFilterCheckbox_C", "UpdateCheckbox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SessionFilterCheckbox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SessionFilterCheckbox_C", "PreConstruct");

	Params::UUMG_SessionFilterCheckbox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C.ExecuteUbergraph_UMG_SessionFilterCheckbox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionFilterState     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionFilterState     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionFilterState     Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionFilterState     Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionFilterState     Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionFilterState     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionFilterState     K2Node_CustomEvent_Checked                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SessionFilterCheckbox_C::ExecuteUbergraph_UMG_SessionFilterCheckbox(int32 EntryPoint, enum class ESessionFilterState Temp_byte_Variable, enum class ESessionFilterState Temp_byte_Variable_1, enum class ESessionFilterState Temp_byte_Variable_2, enum class ESessionFilterState Temp_byte_Variable_3, enum class ESessionFilterState Temp_byte_Variable_4, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, enum class ESessionFilterState K2Node_Select_Default, enum class ESessionFilterState K2Node_CustomEvent_Checked, class UTexture2D* K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SessionFilterCheckbox_C", "ExecuteUbergraph_UMG_SessionFilterCheckbox");

	Params::UUMG_SessionFilterCheckbox_C_ExecuteUbergraph_UMG_SessionFilterCheckbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Checked = K2Node_CustomEvent_Checked;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C.Updated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESessionFilterState     Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasForced                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SessionFilterCheckbox_C::Updated__DelegateSignature(enum class ESessionFilterState Checked, bool WasForced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SessionFilterCheckbox_C", "Updated__DelegateSignature");

	Params::UUMG_SessionFilterCheckbox_C_Updated__DelegateSignature_Params Parms{};

	Parms.Checked = Checked;
	Parms.WasForced = WasForced;

	UObject::ProcessEvent(Func, &Parms);

}

}


