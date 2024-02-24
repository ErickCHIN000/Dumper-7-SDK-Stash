#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BioLab_ShopItem_Slot.UMG_BioLab_ShopItem_Slot_C
// (None)

class UClass* UUMG_BioLab_ShopItem_Slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BioLab_ShopItem_Slot_C");

	return Clss;
}


// UMG_BioLab_ShopItem_Slot_C UMG_BioLab_ShopItem_Slot.Default__UMG_BioLab_ShopItem_Slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BioLab_ShopItem_Slot_C* UUMG_BioLab_ShopItem_Slot_C::GetDefaultObj()
{
	static class UUMG_BioLab_ShopItem_Slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BioLab_ShopItem_Slot_C*>(UUMG_BioLab_ShopItem_Slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BioLab_ShopItem_Slot.UMG_BioLab_ShopItem_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BioLab_ShopItem_Slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_ShopItem_Slot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_ShopItem_Slot.UMG_BioLab_ShopItem_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BioLab_ShopItem_Slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_ShopItem_Slot_C", "PreConstruct");

	Params::UUMG_BioLab_ShopItem_Slot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_ShopItem_Slot.UMG_BioLab_ShopItem_Slot_C.ExecuteUbergraph_UMG_BioLab_ShopItem_Slot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_ShopItem_Slot_C::ExecuteUbergraph_UMG_BioLab_ShopItem_Slot(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_ShopItem_Slot_C", "ExecuteUbergraph_UMG_BioLab_ShopItem_Slot");

	Params::UUMG_BioLab_ShopItem_Slot_C_ExecuteUbergraph_UMG_BioLab_ShopItem_Slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


