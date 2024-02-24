#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CreatureEntryGrid.W_CreatureEntryGrid_C
// (None)

class UClass* UW_CreatureEntryGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CreatureEntryGrid_C");

	return Clss;
}


// W_CreatureEntryGrid_C W_CreatureEntryGrid.Default__W_CreatureEntryGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CreatureEntryGrid_C* UW_CreatureEntryGrid_C::GetDefaultObj()
{
	static class UW_CreatureEntryGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CreatureEntryGrid_C*>(UW_CreatureEntryGrid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CreatureEntryGrid.W_CreatureEntryGrid_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_CreatureEntryGrid_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureEntryGrid_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CreatureEntryGrid.W_CreatureEntryGrid_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CreatureEntryGrid_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureEntryGrid_C", "PreConstruct");

	Params::UW_CreatureEntryGrid_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CreatureEntryGrid.W_CreatureEntryGrid_C.ExecuteUbergraph_W_CreatureEntryGrid
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup                                (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBestiaryData               CallFunc_GetBestiaryDataStruct_BestiaryData                      (None)
// enum class EValid                  CallFunc_GetBestiaryDataStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CreatureEntryGrid_C::ExecuteUbergraph_W_CreatureEntryGrid(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FBestiaryData& CallFunc_GetBestiaryDataStruct_BestiaryData, enum class EValid CallFunc_GetBestiaryDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureEntryGrid_C", "ExecuteUbergraph_W_CreatureEntryGrid");

	Params::UW_CreatureEntryGrid_C_ExecuteUbergraph_W_CreatureEntryGrid_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetAISetupStruct_AISetup = CallFunc_GetAISetupStruct_AISetup;
	Parms.CallFunc_GetAISetupStruct_Paths = CallFunc_GetAISetupStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBestiaryDataStruct_BestiaryData = CallFunc_GetBestiaryDataStruct_BestiaryData;
	Parms.CallFunc_GetBestiaryDataStruct_Paths = CallFunc_GetBestiaryDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


