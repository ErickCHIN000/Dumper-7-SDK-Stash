#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItems_ToolDamage.UMG_FieldGuideItems_ToolDamage_C
// (None)

class UClass* UUMG_FieldGuideItems_ToolDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItems_ToolDamage_C");

	return Clss;
}


// UMG_FieldGuideItems_ToolDamage_C UMG_FieldGuideItems_ToolDamage.Default__UMG_FieldGuideItems_ToolDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItems_ToolDamage_C* UUMG_FieldGuideItems_ToolDamage_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItems_ToolDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItems_ToolDamage_C*>(UUMG_FieldGuideItems_ToolDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItems_ToolDamage.UMG_FieldGuideItems_ToolDamage_C.UpdateDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FStatsEnum                  Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FStatsEnum                  Variation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UUMG_FieldGuideItems_DamageVariationLarge_C*Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Get_Damage_Variation_Specific_Minimum                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Damage_Variation_Specific_Maximum                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItems_ToolDamage_C::UpdateDamage(class FText Type, const struct FStatsEnum& Damage, const struct FStatsEnum& Variation, class UUMG_FieldGuideItems_DamageVariationLarge_C* Target, bool* Valid, int32 CallFunc_Get_Damage_Variation_Specific_Minimum, int32 CallFunc_Get_Damage_Variation_Specific_Maximum, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_ToolDamage_C", "UpdateDamage");

	Params::UUMG_FieldGuideItems_ToolDamage_C_UpdateDamage_Params Parms{};

	Parms.Type = Type;
	Parms.Damage = Damage;
	Parms.Variation = Variation;
	Parms.Target = Target;
	Parms.CallFunc_Get_Damage_Variation_Specific_Minimum = CallFunc_Get_Damage_Variation_Specific_Minimum;
	Parms.CallFunc_Get_Damage_Variation_Specific_Maximum = CallFunc_Get_Damage_Variation_Specific_Maximum;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function UMG_FieldGuideItems_ToolDamage.UMG_FieldGuideItems_ToolDamage_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Valid                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateDamage_Valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateDamage_Valid_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateDamage_Valid_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateDamage_Valid_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateDamage_Valid_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateDamage_Valid_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateDamage_Valid_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItems_ToolDamage_C::Update(const struct FItemData& Item, bool Valid, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_UpdateDamage_Valid, bool CallFunc_UpdateDamage_Valid_1, bool CallFunc_UpdateDamage_Valid_2, bool CallFunc_UpdateDamage_Valid_3, bool CallFunc_UpdateDamage_Valid_4, bool CallFunc_UpdateDamage_Valid_5, bool CallFunc_UpdateDamage_Valid_6, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_ToolDamage_C", "Update");

	Params::UUMG_FieldGuideItems_ToolDamage_C_Update_Params Parms{};

	Parms.Item = Item;
	Parms.Valid = Valid;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_UpdateDamage_Valid = CallFunc_UpdateDamage_Valid;
	Parms.CallFunc_UpdateDamage_Valid_1 = CallFunc_UpdateDamage_Valid_1;
	Parms.CallFunc_UpdateDamage_Valid_2 = CallFunc_UpdateDamage_Valid_2;
	Parms.CallFunc_UpdateDamage_Valid_3 = CallFunc_UpdateDamage_Valid_3;
	Parms.CallFunc_UpdateDamage_Valid_4 = CallFunc_UpdateDamage_Valid_4;
	Parms.CallFunc_UpdateDamage_Valid_5 = CallFunc_UpdateDamage_Valid_5;
	Parms.CallFunc_UpdateDamage_Valid_6 = CallFunc_UpdateDamage_Valid_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItems_ToolDamage.UMG_FieldGuideItems_ToolDamage_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItems_ToolDamage_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_ToolDamage_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItems_ToolDamage.UMG_FieldGuideItems_ToolDamage_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItems_ToolDamage_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_ToolDamage_C", "BP_OnItemExpansionChanged");

	Params::UUMG_FieldGuideItems_ToolDamage_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItems_ToolDamage.UMG_FieldGuideItems_ToolDamage_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItems_ToolDamage_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_ToolDamage_C", "BP_OnItemSelectionChanged");

	Params::UUMG_FieldGuideItems_ToolDamage_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItems_ToolDamage.UMG_FieldGuideItems_ToolDamage_C.ExecuteUbergraph_UMG_FieldGuideItems_ToolDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItems_ToolDamage_C::ExecuteUbergraph_UMG_FieldGuideItems_ToolDamage(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItems_ToolDamage_C", "ExecuteUbergraph_UMG_FieldGuideItems_ToolDamage");

	Params::UUMG_FieldGuideItems_ToolDamage_C_ExecuteUbergraph_UMG_FieldGuideItems_ToolDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}

}


