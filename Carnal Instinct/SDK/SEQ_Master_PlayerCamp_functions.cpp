#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C
// (Actor)

class UClass* ASEQ_Master_PlayerCamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SEQ_Master_PlayerCamp_C");

	return Clss;
}


// SEQ_Master_PlayerCamp_C SEQ_Master_PlayerCamp.Default__SEQ_Master_PlayerCamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASEQ_Master_PlayerCamp_C* ASEQ_Master_PlayerCamp_C::GetDefaultObj()
{
	static class ASEQ_Master_PlayerCamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASEQ_Master_PlayerCamp_C*>(ASEQ_Master_PlayerCamp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.PlaySEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::PlaySEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "PlaySEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraBed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraBed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraBed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraTent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraTent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraTent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraStash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraStash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraStash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraFollowerCamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraFollowerCamp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraFollowerCamp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraWalkway
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraWalkway()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraWalkway");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraAlchemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraAlchemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraAlchemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraDefences
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraDefences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraDefences");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraCooking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraCooking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraCooking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraObelisk
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraObelisk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraObelisk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraCraftsman
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraCraftsman()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraCraftsman");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.CameraBreeding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::CameraBreeding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "CameraBreeding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.KillSEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_PlayerCamp_C::KillSEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "KillSEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C.ExecuteUbergraph_SEQ_Master_PlayerCamp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings             (NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWB_InGame_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InGame_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_PlayerCamp_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASEQ_Master_PlayerCamp_C::ExecuteUbergraph_SEQ_Master_PlayerCamp(int32 EntryPoint, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_2, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_3, bool Temp_bool_IsClosed_Variable, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_4, class UWB_InGame_C* CallFunc_Array_Get_Item, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_PlayerCamp_C* CallFunc_Create_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_6, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_7, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_8, bool Temp_bool_Has_Been_Initd_Variable, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_9, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_PlayerCamp_C", "ExecuteUbergraph_SEQ_Master_PlayerCamp");

	Params::ASEQ_Master_PlayerCamp_C_ExecuteUbergraph_SEQ_Master_PlayerCamp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_1 = CallFunc_GetSequencePlayer_ReturnValue_1;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_2 = CallFunc_GetSequencePlayer_ReturnValue_2;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_3 = CallFunc_GetSequencePlayer_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_4 = CallFunc_GetSequencePlayer_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_5 = CallFunc_GetSequencePlayer_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_6 = CallFunc_GetSequencePlayer_ReturnValue_6;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_7 = CallFunc_GetSequencePlayer_ReturnValue_7;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_8 = CallFunc_GetSequencePlayer_ReturnValue_8;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_9 = CallFunc_GetSequencePlayer_ReturnValue_9;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_10 = CallFunc_GetSequencePlayer_ReturnValue_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_11 = CallFunc_GetSequencePlayer_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

}

}


