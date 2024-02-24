#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellProj_LightningBlast_Mod03_Repeat.SpellProj_LightningBlast_Mod03_Repeat_C
// (Actor)

class UClass* ASpellProj_LightningBlast_Mod03_Repeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellProj_LightningBlast_Mod03_Repeat_C");

	return Clss;
}


// SpellProj_LightningBlast_Mod03_Repeat_C SpellProj_LightningBlast_Mod03_Repeat.Default__SpellProj_LightningBlast_Mod03_Repeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellProj_LightningBlast_Mod03_Repeat_C* ASpellProj_LightningBlast_Mod03_Repeat_C::GetDefaultObj()
{
	static class ASpellProj_LightningBlast_Mod03_Repeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellProj_LightningBlast_Mod03_Repeat_C*>(ASpellProj_LightningBlast_Mod03_Repeat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellProj_LightningBlast_Mod03_Repeat.SpellProj_LightningBlast_Mod03_Repeat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellProj_LightningBlast_Mod03_Repeat_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_LightningBlast_Mod03_Repeat_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_LightningBlast_Mod03_Repeat.SpellProj_LightningBlast_Mod03_Repeat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpellProj_LightningBlast_Mod03_Repeat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_LightningBlast_Mod03_Repeat_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_LightningBlast_Mod03_Repeat.SpellProj_LightningBlast_Mod03_Repeat_C.RepeatArcingTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellProj_LightningBlast_Mod03_Repeat_C::RepeatArcingTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_LightningBlast_Mod03_Repeat_C", "RepeatArcingTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellProj_LightningBlast_Mod03_Repeat.SpellProj_LightningBlast_Mod03_Repeat_C.ExecuteUbergraph_SpellProj_LightningBlast_Mod03_Repeat
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetupArcingBeams_BeamAttached                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpellProj_LightningBlast_Mod03_Repeat_C::ExecuteUbergraph_SpellProj_LightningBlast_Mod03_Repeat(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item1, bool CallFunc_SetupArcingBeams_BeamAttached)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellProj_LightningBlast_Mod03_Repeat_C", "ExecuteUbergraph_SpellProj_LightningBlast_Mod03_Repeat");

	Params::ASpellProj_LightningBlast_Mod03_Repeat_C_ExecuteUbergraph_SpellProj_LightningBlast_Mod03_Repeat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_SetupArcingBeams_BeamAttached = CallFunc_SetupArcingBeams_BeamAttached;

	UObject::ProcessEvent(Func, &Parms);

}

}


