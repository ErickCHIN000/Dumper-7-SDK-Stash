#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UnlockedGearAGTutorial.UnlockedGearAGTutorial_C
// (Actor)

class UClass* AUnlockedGearAGTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlockedGearAGTutorial_C");

	return Clss;
}


// UnlockedGearAGTutorial_C UnlockedGearAGTutorial.Default__UnlockedGearAGTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUnlockedGearAGTutorial_C* AUnlockedGearAGTutorial_C::GetDefaultObj()
{
	static class AUnlockedGearAGTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUnlockedGearAGTutorial_C*>(AUnlockedGearAGTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UnlockedGearAGTutorial.UnlockedGearAGTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUnlockedGearAGTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockedGearAGTutorial_C", "OnTutorialActivated");

	Params::AUnlockedGearAGTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockedGearAGTutorial.UnlockedGearAGTutorial_C.OnMenuNavigation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InMenuTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AUnlockedGearAGTutorial_C::OnMenuNavigation(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockedGearAGTutorial_C", "OnMenuNavigation");

	Params::AUnlockedGearAGTutorial_C_OnMenuNavigation_Params Parms{};

	Parms.InMenuTag = InMenuTag;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockedGearAGTutorial.UnlockedGearAGTutorial_C.ExecuteUbergraph_UnlockedGearAGTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGPlayerController*> CallFunc_GetAllOwningPlayers_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_InMenuTag                                     (NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      K2Node_CustomEvent_Context                                       (None)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      CallFunc_MakeMenuNavigationContextStruct_ReturnValue             (None)

void AUnlockedGearAGTutorial_C::ExecuteUbergraph_UnlockedGearAGTutorial(int32 EntryPoint, TArray<class AGGPlayerController*>& CallFunc_GetAllOwningPlayers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, int32 CallFunc_Add_IntInt_ReturnValue, class AGGPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_InMenuTag, const struct FMenuNavigationContext& K2Node_CustomEvent_Context, bool CallFunc_MatchesTag_ReturnValue, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FMenuNavigationContext& CallFunc_MakeMenuNavigationContextStruct_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockedGearAGTutorial_C", "ExecuteUbergraph_UnlockedGearAGTutorial");

	Params::AUnlockedGearAGTutorial_C_ExecuteUbergraph_UnlockedGearAGTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllOwningPlayers_ReturnValue = CallFunc_GetAllOwningPlayers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_InMenuTag = K2Node_CustomEvent_InMenuTag;
	Parms.K2Node_CustomEvent_Context = K2Node_CustomEvent_Context;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_MakeMenuNavigationContextStruct_ReturnValue = CallFunc_MakeMenuNavigationContextStruct_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


