#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConstraintSatisfied.WBP_ConstraintSatisfied_C
// (None)

class UClass* UWBP_ConstraintSatisfied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConstraintSatisfied_C");

	return Clss;
}


// WBP_ConstraintSatisfied_C WBP_ConstraintSatisfied.Default__WBP_ConstraintSatisfied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConstraintSatisfied_C* UWBP_ConstraintSatisfied_C::GetDefaultObj()
{
	static class UWBP_ConstraintSatisfied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConstraintSatisfied_C*>(UWBP_ConstraintSatisfied_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConstraintSatisfied.WBP_ConstraintSatisfied_C.UpdateCosmetics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsConstraintSatisfied                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (UObjectWrapper, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_1                                          (UObjectWrapper, HasGetValueTypeHash)

void UWBP_ConstraintSatisfied_C::UpdateCosmetics(bool IsConstraintSatisfied, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConstraintSatisfied_C", "UpdateCosmetics");

	Params::UWBP_ConstraintSatisfied_C_UpdateCosmetics_Params Parms{};

	Parms.IsConstraintSatisfied = IsConstraintSatisfied;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


