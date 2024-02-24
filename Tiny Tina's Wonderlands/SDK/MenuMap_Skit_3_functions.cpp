#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuMap_Skit_3.MenuMap_Skit_C
// (Actor)

class UClass* AMenuMap_Skit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuMap_Skit_C");

	return Clss;
}


// MenuMap_Skit_C MenuMap_Skit_3.Default__MenuMap_Skit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMenuMap_Skit_C* AMenuMap_Skit_C::GetDefaultObj()
{
	static class AMenuMap_Skit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMenuMap_Skit_C*>(AMenuMap_Skit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuMap_Skit_3.MenuMap_Skit_C.BndEvt__MenuMapClaptrapSkitControl_1_K2Node_ActorBoundEvent_0_OnPlaySkit__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AMenuMap_Skit_C::BndEvt__MenuMapClaptrapSkitControl_1_K2Node_ActorBoundEvent_0_OnPlaySkit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Skit_C", "BndEvt__MenuMapClaptrapSkitControl_1_K2Node_ActorBoundEvent_0_OnPlaySkit__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_Skit_3.MenuMap_Skit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMenuMap_Skit_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Skit_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_Skit_3.MenuMap_Skit_C.BndEvt__SEQ_MM_TinyTina_5_K2Node_ActorBoundEvent_3_OnMovieSceneSequencePlayerEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AMenuMap_Skit_C::BndEvt__SEQ_MM_TinyTina_5_K2Node_ActorBoundEvent_3_OnMovieSceneSequencePlayerEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Skit_C", "BndEvt__SEQ_MM_TinyTina_5_K2Node_ActorBoundEvent_3_OnMovieSceneSequencePlayerEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_Skit_3.MenuMap_Skit_C.BndEvt__SEQ_MM_Dice_Drop_3_K2Node_ActorBoundEvent_2_OnMovieSceneSequencePlayerEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AMenuMap_Skit_C::BndEvt__SEQ_MM_Dice_Drop_3_K2Node_ActorBoundEvent_2_OnMovieSceneSequencePlayerEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Skit_C", "BndEvt__SEQ_MM_Dice_Drop_3_K2Node_ActorBoundEvent_2_OnMovieSceneSequencePlayerEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_Skit_3.MenuMap_Skit_C.BndEvt__SEQ_MM_Goblin__K2Node_ActorBoundEvent_4_OnMovieSceneSequencePlayerEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AMenuMap_Skit_C::BndEvt__SEQ_MM_Goblin__K2Node_ActorBoundEvent_4_OnMovieSceneSequencePlayerEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Skit_C", "BndEvt__SEQ_MM_Goblin__K2Node_ActorBoundEvent_4_OnMovieSceneSequencePlayerEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_Skit_3.MenuMap_Skit_C.ExecuteUbergraph_MenuMap_Skit_3
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxLevelSequenceActor*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMenuMap_Skit_C::ExecuteUbergraph_MenuMap_Skit_3(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AGbxLevelSequenceActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Skit_C", "ExecuteUbergraph_MenuMap_Skit_3");

	Params::AMenuMap_Skit_C_ExecuteUbergraph_MenuMap_Skit_3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


