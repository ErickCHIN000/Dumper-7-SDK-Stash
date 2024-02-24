#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DifficultyModifiers.UMG_DifficultyModifiers_C
// (None)

class UClass* UUMG_DifficultyModifiers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DifficultyModifiers_C");

	return Clss;
}


// UMG_DifficultyModifiers_C UMG_DifficultyModifiers.Default__UMG_DifficultyModifiers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DifficultyModifiers_C* UUMG_DifficultyModifiers_C::GetDefaultObj()
{
	static class UUMG_DifficultyModifiers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DifficultyModifiers_C*>(UUMG_DifficultyModifiers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Modifier                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_DifficultyModifiers_C::UpdateText(class FText Reason, class FText Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DifficultyModifiers_C", "UpdateText");

	Params::UUMG_DifficultyModifiers_C_UpdateText_Params Parms{};

	Parms.Reason = Reason;
	Parms.Modifier = Modifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BackgroundColour                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ContentColour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        RewardMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        MainText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Insurance                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Harcore                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DifficultyModifiers_C::Initialize(const struct FLinearColor& BackgroundColour, const struct FLinearColor& ContentColour, class FText RewardMultiplier, class FText MainText, bool Insurance, bool Harcore, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DifficultyModifiers_C", "Initialize");

	Params::UUMG_DifficultyModifiers_C_Initialize_Params Parms{};

	Parms.BackgroundColour = BackgroundColour;
	Parms.ContentColour = ContentColour;
	Parms.RewardMultiplier = RewardMultiplier;
	Parms.MainText = MainText;
	Parms.Insurance = Insurance;
	Parms.Harcore = Harcore;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DifficultyModifiers_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DifficultyModifiers_C", "PreConstruct");

	Params::UUMG_DifficultyModifiers_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DifficultyModifiers_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DifficultyModifiers_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.PlayEnterAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DifficultyModifiers_C::PlayEnterAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DifficultyModifiers_C", "PlayEnterAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.ExecuteUbergraph_UMG_DifficultyModifiers
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DifficultyModifiers_C::ExecuteUbergraph_UMG_DifficultyModifiers(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DifficultyModifiers_C", "ExecuteUbergraph_UMG_DifficultyModifiers");

	Params::UUMG_DifficultyModifiers_C_ExecuteUbergraph_UMG_DifficultyModifiers_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


