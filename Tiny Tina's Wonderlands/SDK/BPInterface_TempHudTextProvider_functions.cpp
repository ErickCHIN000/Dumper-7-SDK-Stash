#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C
// (None)

class UClass* IBPInterface_TempHudTextProvider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInterface_TempHudTextProvider_C");

	return Clss;
}


// BPInterface_TempHudTextProvider_C BPInterface_TempHudTextProvider.Default__BPInterface_TempHudTextProvider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPInterface_TempHudTextProvider_C* IBPInterface_TempHudTextProvider_C::GetDefaultObj()
{
	static class IBPInterface_TempHudTextProvider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPInterface_TempHudTextProvider_C*>(IBPInterface_TempHudTextProvider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C.SetMissionDebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FacePlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPInterface_TempHudTextProvider_C::SetMissionDebugText(class FText Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPInterface_TempHudTextProvider_C", "SetMissionDebugText");

	Params::IBPInterface_TempHudTextProvider_C_SetMissionDebugText_Params Parms{};

	Parms.Text = Text;
	Parms.TextSize = TextSize;
	Parms.Duration = Duration;
	Parms.TextColor = TextColor;
	Parms.FacePlayer = FacePlayer;

	UObject::ProcessEvent(Func, &Parms);

}

}


