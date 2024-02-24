#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UnlockedUpdate03Tutorial.UnlockedUpdate03Tutorial_C
// (Actor)

class UClass* AUnlockedUpdate03Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlockedUpdate03Tutorial_C");

	return Clss;
}


// UnlockedUpdate03Tutorial_C UnlockedUpdate03Tutorial.Default__UnlockedUpdate03Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUnlockedUpdate03Tutorial_C* AUnlockedUpdate03Tutorial_C::GetDefaultObj()
{
	static class AUnlockedUpdate03Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUnlockedUpdate03Tutorial_C*>(AUnlockedUpdate03Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UnlockedUpdate03Tutorial.UnlockedUpdate03Tutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUnlockedUpdate03Tutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockedUpdate03Tutorial_C", "OnTutorialActivated");

	Params::AUnlockedUpdate03Tutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockedUpdate03Tutorial.UnlockedUpdate03Tutorial_C.OnMenuNavigation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InMenuTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AUnlockedUpdate03Tutorial_C::OnMenuNavigation(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockedUpdate03Tutorial_C", "OnMenuNavigation");

	Params::AUnlockedUpdate03Tutorial_C_OnMenuNavigation_Params Parms{};

	Parms.InMenuTag = InMenuTag;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockedUpdate03Tutorial.UnlockedUpdate03Tutorial_C.ExecuteUbergraph_UnlockedUpdate03Tutorial
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

void AUnlockedUpdate03Tutorial_C::ExecuteUbergraph_UnlockedUpdate03Tutorial(int32 EntryPoint, TArray<class AGGPlayerController*>& CallFunc_GetAllOwningPlayers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, int32 CallFunc_Add_IntInt_ReturnValue, class AGGPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_InMenuTag, const struct FMenuNavigationContext& K2Node_CustomEvent_Context, bool CallFunc_MatchesTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockedUpdate03Tutorial_C", "ExecuteUbergraph_UnlockedUpdate03Tutorial");

	Params::AUnlockedUpdate03Tutorial_C_ExecuteUbergraph_UnlockedUpdate03Tutorial_Params Parms{};

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

	UObject::ProcessEvent(Func, &Parms);

}

}


