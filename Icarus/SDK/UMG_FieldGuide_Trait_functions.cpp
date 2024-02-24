#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_Trait.UMG_FieldGuide_Trait_C
// (None)

class UClass* UUMG_FieldGuide_Trait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_Trait_C");

	return Clss;
}


// UMG_FieldGuide_Trait_C UMG_FieldGuide_Trait.Default__UMG_FieldGuide_Trait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_Trait_C* UUMG_FieldGuide_Trait_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_Trait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_Trait_C*>(UUMG_FieldGuide_Trait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_Trait.UMG_FieldGuide_Trait_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Trait_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Trait_C", "PreConstruct");

	Params::UUMG_FieldGuide_Trait_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Trait.UMG_FieldGuide_Trait_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Trait_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Trait_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Trait.UMG_FieldGuide_Trait_C.ExecuteUbergraph_UMG_FieldGuide_Trait
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBestiaryTraitData          CallFunc_GetBestiaryTraitsStruct_BestiaryTraits                  (None)
// enum class EValid                  CallFunc_GetBestiaryTraitsStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBestiaryTraitType          CallFunc_GetBestiaryTraitTypesStruct_BestiaryTraitTypes          (None)
// enum class EValid                  CallFunc_GetBestiaryTraitTypesStruct_Paths                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_1                                          (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_2                                          (UObjectWrapper, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_Trait_C::ExecuteUbergraph_UMG_FieldGuide_Trait(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable, bool Temp_bool_Variable_3, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_4, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, bool K2Node_Event_IsDesignTime, const struct FBestiaryTraitData& CallFunc_GetBestiaryTraitsStruct_BestiaryTraits, enum class EValid CallFunc_GetBestiaryTraitsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FBestiaryTraitType& CallFunc_GetBestiaryTraitTypesStruct_BestiaryTraitTypes, enum class EValid CallFunc_GetBestiaryTraitTypesStruct_Paths, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class FText K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Trait_C", "ExecuteUbergraph_UMG_FieldGuide_Trait");

	Params::UUMG_FieldGuide_Trait_C_ExecuteUbergraph_UMG_FieldGuide_Trait_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetBestiaryTraitsStruct_BestiaryTraits = CallFunc_GetBestiaryTraitsStruct_BestiaryTraits;
	Parms.CallFunc_GetBestiaryTraitsStruct_Paths = CallFunc_GetBestiaryTraitsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_GetBestiaryTraitTypesStruct_BestiaryTraitTypes = CallFunc_GetBestiaryTraitTypesStruct_BestiaryTraitTypes;
	Parms.CallFunc_GetBestiaryTraitTypesStruct_Paths = CallFunc_GetBestiaryTraitTypesStruct_Paths;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


