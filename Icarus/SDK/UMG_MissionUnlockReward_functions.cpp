#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MissionUnlockReward.UMG_MissionUnlockReward_C
// (None)

class UClass* UUMG_MissionUnlockReward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MissionUnlockReward_C");

	return Clss;
}


// UMG_MissionUnlockReward_C UMG_MissionUnlockReward.Default__UMG_MissionUnlockReward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MissionUnlockReward_C* UUMG_MissionUnlockReward_C::GetDefaultObj()
{
	static class UUMG_MissionUnlockReward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MissionUnlockReward_C*>(UUMG_MissionUnlockReward_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_MissionUnlockReward_C::UpdateText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MissionUnlockReward_C", "UpdateText");

	Params::UUMG_MissionUnlockReward_C_UpdateText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.Style Box
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ContentColour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BackgroundColour                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MissionUnlockReward_C::Style_Box(const struct FLinearColor& ContentColour, const struct FLinearColor& BackgroundColour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MissionUnlockReward_C", "Style Box");

	Params::UUMG_MissionUnlockReward_C_Style_Box_Params Parms{};

	Parms.ContentColour = ContentColour;
	Parms.BackgroundColour = BackgroundColour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MissionUnlockReward_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MissionUnlockReward_C", "PreConstruct");

	Params::UUMG_MissionUnlockReward_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MissionUnlockReward_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MissionUnlockReward_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.ExecuteUbergraph_UMG_MissionUnlockReward
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MissionUnlockReward_C::ExecuteUbergraph_UMG_MissionUnlockReward(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MissionUnlockReward_C", "ExecuteUbergraph_UMG_MissionUnlockReward");

	Params::UUMG_MissionUnlockReward_C_ExecuteUbergraph_UMG_MissionUnlockReward_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


