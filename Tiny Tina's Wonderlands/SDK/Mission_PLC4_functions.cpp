#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mission_PLC4.Mission_PLC4_C
// (None)

class UClass* UMission_PLC4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mission_PLC4_C");

	return Clss;
}


// Mission_PLC4_C Mission_PLC4.Default__Mission_PLC4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMission_PLC4_C* UMission_PLC4_C::GetDefaultObj()
{
	static class UMission_PLC4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMission_PLC4_C*>(UMission_PLC4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mission_PLC4.Mission_PLC4_C.Obj_EnterWyvern_02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_EnterWyvern_02(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_EnterWyvern_02");

	Params::UMission_PLC4_C_Obj_EnterWyvern_02_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_EnterWyvern_02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_EnterWyvern_02(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_EnterWyvern_02");

	Params::UMission_PLC4_C_Set_EnterWyvern_02_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_EnterWyvern_01Portal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_EnterWyvern_01Portal(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_EnterWyvern_01Portal");

	Params::UMission_PLC4_C_UPDATE_EnterWyvern_01Portal_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_EnterWyvern_02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_EnterWyvern_02(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_EnterWyvern_02");

	Params::UMission_PLC4_C_UPDATE_EnterWyvern_02_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_FindLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_FindLute(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_FindLute");

	Params::UMission_PLC4_C_Set_FindLute_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_FindLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_FindLute(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_FindLute");

	Params::UMission_PLC4_C_Obj_FindLute_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_FindLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_FindLute(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_FindLute");

	Params::UMission_PLC4_C_UPDATE_FindLute_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_ExitWyvern_02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_ExitWyvern_02(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_ExitWyvern_02");

	Params::UMission_PLC4_C_Set_ExitWyvern_02_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_ExitWyvern_02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_ExitWyvern_02(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_ExitWyvern_02");

	Params::UMission_PLC4_C_Obj_ExitWyvern_02_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_EnterWyvern_01Portal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_EnterWyvern_01Portal(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_EnterWyvern_01Portal");

	Params::UMission_PLC4_C_Obj_EnterWyvern_01Portal_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_EnterWyvern_03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_EnterWyvern_03(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_EnterWyvern_03");

	Params::UMission_PLC4_C_Set_EnterWyvern_03_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_EnterWyvern_03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_EnterWyvern_03(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_EnterWyvern_03");

	Params::UMission_PLC4_C_Obj_EnterWyvern_03_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_EnterWyvern_01Portal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_EnterWyvern_01Portal(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_EnterWyvern_01Portal");

	Params::UMission_PLC4_C_Set_EnterWyvern_01Portal_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_EnterWyvern_03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_EnterWyvern_03(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_EnterWyvern_03");

	Params::UMission_PLC4_C_UPDATE_EnterWyvern_03_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_ReleaseLocks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_ReleaseLocks(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_ReleaseLocks");

	Params::UMission_PLC4_C_Set_ReleaseLocks_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_ReleaseLocks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_ReleaseLocks(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_ReleaseLocks");

	Params::UMission_PLC4_C_Obj_ReleaseLocks_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_CollectStandards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_CollectStandards(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_CollectStandards");

	Params::UMission_PLC4_C_UPDATE_CollectStandards_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_ReleaseLocks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_ReleaseLocks(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_ReleaseLocks");

	Params::UMission_PLC4_C_UPDATE_ReleaseLocks_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_ExitWyvern_02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_ExitWyvern_02(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_ExitWyvern_02");

	Params::UMission_PLC4_C_UPDATE_ExitWyvern_02_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_EnterWyvern_04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_EnterWyvern_04(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_EnterWyvern_04");

	Params::UMission_PLC4_C_Set_EnterWyvern_04_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_EnterWyvern_04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_EnterWyvern_04(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_EnterWyvern_04");

	Params::UMission_PLC4_C_UPDATE_EnterWyvern_04_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_EnterWyvern_04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_EnterWyvern_04(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_EnterWyvern_04");

	Params::UMission_PLC4_C_Obj_EnterWyvern_04_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_DestroyDragon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_DestroyDragon(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_DestroyDragon");

	Params::UMission_PLC4_C_Set_DestroyDragon_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_DestroyDragon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_DestroyDragon(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_DestroyDragon");

	Params::UMission_PLC4_C_Obj_DestroyDragon_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_CollectStandards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_CollectStandards(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_CollectStandards");

	Params::UMission_PLC4_C_Obj_CollectStandards_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_DestroyDragon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_DestroyDragon(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_DestroyDragon");

	Params::UMission_PLC4_C_UPDATE_DestroyDragon_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_FindTheWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_FindTheWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_FindTheWyvern");

	Params::UMission_PLC4_C_Set_FindTheWyvern_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_FindTheWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_FindTheWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_FindTheWyvern");

	Params::UMission_PLC4_C_Obj_FindTheWyvern_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_ExitWyvern_03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_ExitWyvern_03(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_ExitWyvern_03");

	Params::UMission_PLC4_C_Set_ExitWyvern_03_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_ExitWyvern_03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_ExitWyvern_03(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_ExitWyvern_03");

	Params::UMission_PLC4_C_Obj_ExitWyvern_03_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_ExitWyvern_03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_ExitWyvern_03(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_ExitWyvern_03");

	Params::UMission_PLC4_C_UPDATE_ExitWyvern_03_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_CollectStandards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_CollectStandards(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_CollectStandards");

	Params::UMission_PLC4_C_Set_CollectStandards_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_ExitWyvern_04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_ExitWyvern_04(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_ExitWyvern_04");

	Params::UMission_PLC4_C_Set_ExitWyvern_04_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_ExitWyvern_04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_ExitWyvern_04(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_ExitWyvern_04");

	Params::UMission_PLC4_C_Obj_ExitWyvern_04_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_ExitWyvern_04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_ExitWyvern_04(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_ExitWyvern_04");

	Params::UMission_PLC4_C_UPDATE_ExitWyvern_04_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_EnterWyvernBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_EnterWyvernBoss(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_EnterWyvernBoss");

	Params::UMission_PLC4_C_Set_EnterWyvernBoss_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_EnterWyvernBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_EnterWyvernBoss(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_EnterWyvernBoss");

	Params::UMission_PLC4_C_Obj_EnterWyvernBoss_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_EnterWyvernBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_EnterWyvernBoss(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_EnterWyvernBoss");

	Params::UMission_PLC4_C_UPDATE_EnterWyvernBoss_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_KillWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_KillWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_KillWyvern");

	Params::UMission_PLC4_C_Set_KillWyvern_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_KillWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_KillWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_KillWyvern");

	Params::UMission_PLC4_C_Obj_KillWyvern_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Update_KillWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Update_KillWyvern(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Update_KillWyvern");

	Params::UMission_PLC4_C_Update_KillWyvern_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.SET_ReturnToHub
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::SET_ReturnToHub(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "SET_ReturnToHub");

	Params::UMission_PLC4_C_SET_ReturnToHub_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.OBJ_ReturnToHub
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::OBJ_ReturnToHub(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "OBJ_ReturnToHub");

	Params::UMission_PLC4_C_OBJ_ReturnToHub_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_ReturnToHub
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_ReturnToHub(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_ReturnToHub");

	Params::UMission_PLC4_C_UPDATE_ReturnToHub_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_EnterWyvern_01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_EnterWyvern_01(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_EnterWyvern_01");

	Params::UMission_PLC4_C_UPDATE_EnterWyvern_01_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_StealGold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_StealGold(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_StealGold");

	Params::UMission_PLC4_C_Set_StealGold_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_StealGold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_StealGold(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_StealGold");

	Params::UMission_PLC4_C_Obj_StealGold_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_StealGold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_StealGold(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_StealGold");

	Params::UMission_PLC4_C_UPDATE_StealGold_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_10
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_10()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_10");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_11
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_11()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_11");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_12
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_12()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_12");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_13
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_13()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_13");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_LootVault
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_LootVault(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_LootVault");

	Params::UMission_PLC4_C_Set_LootVault_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_14
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_14()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_14");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_LootVault
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_LootVault(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_LootVault");

	Params::UMission_PLC4_C_Obj_LootVault_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_LootVault
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_LootVault(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_LootVault");

	Params::UMission_PLC4_C_UPDATE_LootVault_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_ReleaseCart1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_ReleaseCart1(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_ReleaseCart1");

	Params::UMission_PLC4_C_Set_ReleaseCart1_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_ReleaseCart1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_ReleaseCart1(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_ReleaseCart1");

	Params::UMission_PLC4_C_Obj_ReleaseCart1_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_15
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_15()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_15");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_ReleaseCart1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_ReleaseCart1(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_ReleaseCart1");

	Params::UMission_PLC4_C_UPDATE_ReleaseCart1_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_EnterWyvern_01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_EnterWyvern_01(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_EnterWyvern_01");

	Params::UMission_PLC4_C_Obj_EnterWyvern_01_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_Collect4Gold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_Collect4Gold(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_Collect4Gold");

	Params::UMission_PLC4_C_Set_Collect4Gold_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_Collect4Gold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_Collect4Gold(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_Collect4Gold");

	Params::UMission_PLC4_C_Obj_Collect4Gold_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_16
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_16()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_16");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_Collect4Gold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_Collect4Gold(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_Collect4Gold");

	Params::UMission_PLC4_C_UPDATE_Collect4Gold_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_EnterWyvern_01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_EnterWyvern_01(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_EnterWyvern_01");

	Params::UMission_PLC4_C_Set_EnterWyvern_01_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_StealGold_Objective] PROXY_17
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_StealGold_Objective__PROXY_17()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_StealGold_Objective] PROXY_17");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_StealGold_Objective] PROXY_18
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_StealGold_Objective__PROXY_18()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_StealGold_Objective] PROXY_18");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_KillGolem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_KillGolem(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_KillGolem");

	Params::UMission_PLC4_C_Set_KillGolem_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_19
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_19()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_19");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_EnterThePortal_Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_EnterThePortal_Intro(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_EnterThePortal_Intro");

	Params::UMission_PLC4_C_UPDATE_EnterThePortal_Intro_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_Gather_RemainingGold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_Gather_RemainingGold(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_Gather_RemainingGold");

	Params::UMission_PLC4_C_Set_Gather_RemainingGold_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_Gather_RemainingGold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_Gather_RemainingGold(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_Gather_RemainingGold");

	Params::UMission_PLC4_C_Obj_Gather_RemainingGold_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_20
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_20()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_20");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_Gather_RemainingGold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_Gather_RemainingGold(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_Gather_RemainingGold");

	Params::UMission_PLC4_C_UPDATE_Gather_RemainingGold_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_KillGolem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_KillGolem(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_KillGolem");

	Params::UMission_PLC4_C_UPDATE_KillGolem_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_StealGold_Objective] PROXY_21
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_StealGold_Objective__PROXY_21()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_StealGold_Objective] PROXY_21");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_StealGold_Objective] PROXY_22
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_StealGold_Objective__PROXY_22()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_StealGold_Objective] PROXY_22");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_KillGolem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_KillGolem(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_KillGolem");

	Params::UMission_PLC4_C_Obj_KillGolem_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_EnterThePortal_Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_EnterThePortal_Intro(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_EnterThePortal_Intro");

	Params::UMission_PLC4_C_Obj_EnterThePortal_Intro_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_AquireLever
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_AquireLever(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_AquireLever");

	Params::UMission_PLC4_C_Set_AquireLever_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_AquireLever
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_AquireLever(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_AquireLever");

	Params::UMission_PLC4_C_Obj_AquireLever_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_23
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_23()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_23");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_AquireLever
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_AquireLever(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_AquireLever");

	Params::UMission_PLC4_C_UPDATE_AquireLever_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_EnterThePortal_Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_EnterThePortal_Intro(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_EnterThePortal_Intro");

	Params::UMission_PLC4_C_Set_EnterThePortal_Intro_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_UseLever
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_UseLever(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_UseLever");

	Params::UMission_PLC4_C_Set_UseLever_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_UseLever
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_UseLever(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_UseLever");

	Params::UMission_PLC4_C_Obj_UseLever_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_24
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_24()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_24");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_UseLever
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_UseLever(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_UseLever");

	Params::UMission_PLC4_C_UPDATE_UseLever_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_DefendTown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_DefendTown(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_DefendTown");

	Params::UMission_PLC4_C_Set_DefendTown_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_DefendTown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_DefendTown(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_DefendTown");

	Params::UMission_PLC4_C_Obj_DefendTown_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_25
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_25()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_25");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_DefendTown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_DefendTown(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_DefendTown");

	Params::UMission_PLC4_C_UPDATE_DefendTown_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_EnterCourtyard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_EnterCourtyard(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_EnterCourtyard");

	Params::UMission_PLC4_C_Set_EnterCourtyard_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Oby_EnterCourtyard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Oby_EnterCourtyard(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Oby_EnterCourtyard");

	Params::UMission_PLC4_C_Oby_EnterCourtyard_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_26
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_26()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_26");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_EnterCourtyard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_EnterCourtyard(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_EnterCourtyard");

	Params::UMission_PLC4_C_UPDATE_EnterCourtyard_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_KillTroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_KillTroll(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_KillTroll");

	Params::UMission_PLC4_C_Set_KillTroll_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_KillTroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_KillTroll(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_KillTroll");

	Params::UMission_PLC4_C_Obj_KillTroll_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_27
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_27()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_27");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_KillTroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_KillTroll(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_KillTroll");

	Params::UMission_PLC4_C_UPDATE_KillTroll_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_AquireLever_Objective] PROXY_28
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_AquireLever_Objective__PROXY_28()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_AquireLever_Objective] PROXY_28");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_AquireLever_Objective] PROXY_29
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_AquireLever_Objective__PROXY_29()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_AquireLever_Objective] PROXY_29");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.Set_EnterWyvernIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::Set_EnterWyvernIntro(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Set_EnterWyvernIntro");

	Params::UMission_PLC4_C_Set_EnterWyvernIntro_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.Obj_EnterWyvernIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC4_C::Obj_EnterWyvernIntro(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "Obj_EnterWyvernIntro");

	Params::UMission_PLC4_C_Obj_EnterWyvernIntro_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.[Obj_FindTheWyvern_Objective] PROXY_30
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::_Obj_FindTheWyvern_Objective__PROXY_30()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "[Obj_FindTheWyvern_Objective] PROXY_30");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.UPDATE_EnterWyvernIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::UPDATE_EnterWyvernIntro(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "UPDATE_EnterWyvernIntro");

	Params::UMission_PLC4_C_UPDATE_EnterWyvernIntro_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC4.Mission_PLC4_C.MissionKickoff
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::MissionKickoff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "MissionKickoff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.MissionActiveLoad
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::MissionActiveLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "MissionActiveLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.MissionCompleteLoad
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission_PLC4_C::MissionCompleteLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "MissionCompleteLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC4.Mission_PLC4_C.ExecuteUbergraph_Mission_PLC4
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent28                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount28                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents28             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent28              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context27                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context26                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent27              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent27                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount27                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents27             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context25                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent26              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent26                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount26                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents26             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent25                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount25                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents25             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent25              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent24                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount24                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents24             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent24              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context24                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent23              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent23                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount23                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents23             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum5_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context23                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context22                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context21                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent22              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context20                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent22                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount22                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents22             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum6_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent21              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent21                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount21                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum7_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent20                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount20                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context19                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum8_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent20              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent19              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum9_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum10_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context18                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum11_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context17                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum12_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context16                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum13_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum14_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum15_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum16_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum17_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum18_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum19_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum20_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum21_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum22_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum23_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum24_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum25_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum26_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum27_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation                      (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs                   (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation1                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue2                           (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue3                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation2                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation3                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum28_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC4_C::ExecuteUbergraph_Mission_PLC4(int32 EntryPoint, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent28, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount28, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents28, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent28, class UObject* MissionK2Node_MissionCustomEvent_Context27, class UObject* MissionK2Node_MissionCustomEvent_Context26, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent27, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent27, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount27, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents27, class UObject* MissionK2Node_MissionCustomEvent_Context25, bool K2Node_SwitchEnum1_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent26, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent26, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount26, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents26, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent25, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount25, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents25, bool K2Node_SwitchEnum2_CmpSuccess, bool K2Node_SwitchEnum3_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent25, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent24, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount24, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents24, bool K2Node_SwitchEnum4_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent24, class UObject* MissionK2Node_MissionCustomEvent_Context24, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent23, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent23, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount23, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents23, bool K2Node_SwitchEnum5_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context23, class UObject* MissionK2Node_MissionCustomEvent_Context22, class UObject* MissionK2Node_MissionCustomEvent_Context21, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent22, class UObject* MissionK2Node_MissionCustomEvent_Context20, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent22, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount22, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents22, bool K2Node_SwitchEnum6_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent21, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent21, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount21, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21, bool K2Node_SwitchEnum7_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent20, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount20, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20, class UObject* MissionK2Node_MissionCustomEvent_Context19, bool K2Node_SwitchEnum8_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent20, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent19, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount19, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent19, bool K2Node_SwitchEnum9_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent18, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount18, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18, bool K2Node_SwitchEnum10_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context18, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent17, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount17, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17, bool K2Node_SwitchEnum11_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context17, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent16, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount16, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16, bool K2Node_SwitchEnum12_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context16, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent15, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount15, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15, bool K2Node_SwitchEnum13_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context15, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent14, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount14, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14, class UObject* MissionK2Node_MissionCustomEvent_Context14, bool K2Node_SwitchEnum14_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context13, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent13, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount13, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13, bool K2Node_SwitchEnum15_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context12, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent12, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount12, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12, bool K2Node_SwitchEnum16_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context11, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent11, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount11, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11, bool K2Node_SwitchEnum17_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context10, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent10, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount10, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10, bool K2Node_SwitchEnum18_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent9, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount9, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9, bool K2Node_SwitchEnum19_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context9, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8, class UObject* MissionK2Node_MissionCustomEvent_Context8, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent8, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount8, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8, bool K2Node_SwitchEnum20_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context7, class UObject* MissionK2Node_MissionCustomEvent_Context6, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent7, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount7, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7, bool K2Node_SwitchEnum21_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent6, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount6, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6, bool K2Node_SwitchEnum22_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, bool K2Node_SwitchEnum23_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context5, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, bool K2Node_SwitchEnum24_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context4, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, bool K2Node_SwitchEnum25_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum26_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context2, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, bool K2Node_SwitchEnum27_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, bool K2Node_SwitchEnum28_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context, class UClass* CallFunc_GetObjectClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC4_C", "ExecuteUbergraph_Mission_PLC4");

	Params::UMission_PLC4_C_ExecuteUbergraph_Mission_PLC4_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent28 = MissionK2Node_ObjectiveEvent_ObjectiveEvent28;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount28 = MissionK2Node_ObjectiveEvent_ObjectiveCount28;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents28 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents28;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent28 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent28;
	Parms.MissionK2Node_MissionCustomEvent_Context27 = MissionK2Node_MissionCustomEvent_Context27;
	Parms.MissionK2Node_MissionCustomEvent_Context26 = MissionK2Node_MissionCustomEvent_Context26;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent27 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent27;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent27 = MissionK2Node_ObjectiveEvent_ObjectiveEvent27;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount27 = MissionK2Node_ObjectiveEvent_ObjectiveCount27;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents27 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents27;
	Parms.MissionK2Node_MissionCustomEvent_Context25 = MissionK2Node_MissionCustomEvent_Context25;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent26 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent26;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent26 = MissionK2Node_ObjectiveEvent_ObjectiveEvent26;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount26 = MissionK2Node_ObjectiveEvent_ObjectiveCount26;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents26 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents26;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent25 = MissionK2Node_ObjectiveEvent_ObjectiveEvent25;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount25 = MissionK2Node_ObjectiveEvent_ObjectiveCount25;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents25 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents25;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent25 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent25;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent24 = MissionK2Node_ObjectiveEvent_ObjectiveEvent24;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount24 = MissionK2Node_ObjectiveEvent_ObjectiveCount24;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents24 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents24;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent24 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent24;
	Parms.MissionK2Node_MissionCustomEvent_Context24 = MissionK2Node_MissionCustomEvent_Context24;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent23 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent23;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent23 = MissionK2Node_ObjectiveEvent_ObjectiveEvent23;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount23 = MissionK2Node_ObjectiveEvent_ObjectiveCount23;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents23 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents23;
	Parms.K2Node_SwitchEnum5_CmpSuccess = K2Node_SwitchEnum5_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context23 = MissionK2Node_MissionCustomEvent_Context23;
	Parms.MissionK2Node_MissionCustomEvent_Context22 = MissionK2Node_MissionCustomEvent_Context22;
	Parms.MissionK2Node_MissionCustomEvent_Context21 = MissionK2Node_MissionCustomEvent_Context21;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent22 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent22;
	Parms.MissionK2Node_MissionCustomEvent_Context20 = MissionK2Node_MissionCustomEvent_Context20;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent22 = MissionK2Node_ObjectiveEvent_ObjectiveEvent22;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount22 = MissionK2Node_ObjectiveEvent_ObjectiveCount22;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents22 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents22;
	Parms.K2Node_SwitchEnum6_CmpSuccess = K2Node_SwitchEnum6_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent21 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent21;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent21 = MissionK2Node_ObjectiveEvent_ObjectiveEvent21;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount21 = MissionK2Node_ObjectiveEvent_ObjectiveCount21;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21;
	Parms.K2Node_SwitchEnum7_CmpSuccess = K2Node_SwitchEnum7_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent20 = MissionK2Node_ObjectiveEvent_ObjectiveEvent20;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount20 = MissionK2Node_ObjectiveEvent_ObjectiveCount20;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20;
	Parms.MissionK2Node_MissionCustomEvent_Context19 = MissionK2Node_MissionCustomEvent_Context19;
	Parms.K2Node_SwitchEnum8_CmpSuccess = K2Node_SwitchEnum8_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent20 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent20;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent19 = MissionK2Node_ObjectiveEvent_ObjectiveEvent19;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount19 = MissionK2Node_ObjectiveEvent_ObjectiveCount19;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent19 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent19;
	Parms.K2Node_SwitchEnum9_CmpSuccess = K2Node_SwitchEnum9_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent18 = MissionK2Node_ObjectiveEvent_ObjectiveEvent18;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount18 = MissionK2Node_ObjectiveEvent_ObjectiveCount18;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18;
	Parms.K2Node_SwitchEnum10_CmpSuccess = K2Node_SwitchEnum10_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context18 = MissionK2Node_MissionCustomEvent_Context18;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent17 = MissionK2Node_ObjectiveEvent_ObjectiveEvent17;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount17 = MissionK2Node_ObjectiveEvent_ObjectiveCount17;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17;
	Parms.K2Node_SwitchEnum11_CmpSuccess = K2Node_SwitchEnum11_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context17 = MissionK2Node_MissionCustomEvent_Context17;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent16 = MissionK2Node_ObjectiveEvent_ObjectiveEvent16;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount16 = MissionK2Node_ObjectiveEvent_ObjectiveCount16;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16;
	Parms.K2Node_SwitchEnum12_CmpSuccess = K2Node_SwitchEnum12_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context16 = MissionK2Node_MissionCustomEvent_Context16;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent15 = MissionK2Node_ObjectiveEvent_ObjectiveEvent15;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount15 = MissionK2Node_ObjectiveEvent_ObjectiveCount15;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15;
	Parms.K2Node_SwitchEnum13_CmpSuccess = K2Node_SwitchEnum13_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context15 = MissionK2Node_MissionCustomEvent_Context15;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent14 = MissionK2Node_ObjectiveEvent_ObjectiveEvent14;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount14 = MissionK2Node_ObjectiveEvent_ObjectiveCount14;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14;
	Parms.MissionK2Node_MissionCustomEvent_Context14 = MissionK2Node_MissionCustomEvent_Context14;
	Parms.K2Node_SwitchEnum14_CmpSuccess = K2Node_SwitchEnum14_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context13 = MissionK2Node_MissionCustomEvent_Context13;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent13 = MissionK2Node_ObjectiveEvent_ObjectiveEvent13;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount13 = MissionK2Node_ObjectiveEvent_ObjectiveCount13;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13;
	Parms.K2Node_SwitchEnum15_CmpSuccess = K2Node_SwitchEnum15_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context12 = MissionK2Node_MissionCustomEvent_Context12;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent12 = MissionK2Node_ObjectiveEvent_ObjectiveEvent12;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount12 = MissionK2Node_ObjectiveEvent_ObjectiveCount12;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12;
	Parms.K2Node_SwitchEnum16_CmpSuccess = K2Node_SwitchEnum16_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context11 = MissionK2Node_MissionCustomEvent_Context11;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent11 = MissionK2Node_ObjectiveEvent_ObjectiveEvent11;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount11 = MissionK2Node_ObjectiveEvent_ObjectiveCount11;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11;
	Parms.K2Node_SwitchEnum17_CmpSuccess = K2Node_SwitchEnum17_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context10 = MissionK2Node_MissionCustomEvent_Context10;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent10 = MissionK2Node_ObjectiveEvent_ObjectiveEvent10;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount10 = MissionK2Node_ObjectiveEvent_ObjectiveCount10;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10;
	Parms.K2Node_SwitchEnum18_CmpSuccess = K2Node_SwitchEnum18_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent9 = MissionK2Node_ObjectiveEvent_ObjectiveEvent9;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount9 = MissionK2Node_ObjectiveEvent_ObjectiveCount9;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9;
	Parms.K2Node_SwitchEnum19_CmpSuccess = K2Node_SwitchEnum19_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context9 = MissionK2Node_MissionCustomEvent_Context9;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8;
	Parms.MissionK2Node_MissionCustomEvent_Context8 = MissionK2Node_MissionCustomEvent_Context8;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent8 = MissionK2Node_ObjectiveEvent_ObjectiveEvent8;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount8 = MissionK2Node_ObjectiveEvent_ObjectiveCount8;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8;
	Parms.K2Node_SwitchEnum20_CmpSuccess = K2Node_SwitchEnum20_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context7 = MissionK2Node_MissionCustomEvent_Context7;
	Parms.MissionK2Node_MissionCustomEvent_Context6 = MissionK2Node_MissionCustomEvent_Context6;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent7 = MissionK2Node_ObjectiveEvent_ObjectiveEvent7;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount7 = MissionK2Node_ObjectiveEvent_ObjectiveCount7;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7;
	Parms.K2Node_SwitchEnum21_CmpSuccess = K2Node_SwitchEnum21_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent6 = MissionK2Node_ObjectiveEvent_ObjectiveEvent6;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount6 = MissionK2Node_ObjectiveEvent_ObjectiveCount6;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6;
	Parms.K2Node_SwitchEnum22_CmpSuccess = K2Node_SwitchEnum22_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent5 = MissionK2Node_ObjectiveEvent_ObjectiveEvent5;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount5 = MissionK2Node_ObjectiveEvent_ObjectiveCount5;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5;
	Parms.K2Node_SwitchEnum23_CmpSuccess = K2Node_SwitchEnum23_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context5 = MissionK2Node_MissionCustomEvent_Context5;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent4 = MissionK2Node_ObjectiveEvent_ObjectiveEvent4;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount4 = MissionK2Node_ObjectiveEvent_ObjectiveCount4;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4;
	Parms.K2Node_SwitchEnum24_CmpSuccess = K2Node_SwitchEnum24_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context4 = MissionK2Node_MissionCustomEvent_Context4;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent3 = MissionK2Node_ObjectiveEvent_ObjectiveEvent3;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount3 = MissionK2Node_ObjectiveEvent_ObjectiveCount3;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3;
	Parms.K2Node_SwitchEnum25_CmpSuccess = K2Node_SwitchEnum25_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context3 = MissionK2Node_MissionCustomEvent_Context3;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent2 = MissionK2Node_ObjectiveEvent_ObjectiveEvent2;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount2 = MissionK2Node_ObjectiveEvent_ObjectiveCount2;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2;
	Parms.K2Node_SwitchEnum26_CmpSuccess = K2Node_SwitchEnum26_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context2 = MissionK2Node_MissionCustomEvent_Context2;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent1 = MissionK2Node_ObjectiveEvent_ObjectiveEvent1;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount1 = MissionK2Node_ObjectiveEvent_ObjectiveCount1;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1;
	Parms.K2Node_SwitchEnum27_CmpSuccess = K2Node_SwitchEnum27_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context1 = MissionK2Node_MissionCustomEvent_Context1;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation = CallFunc_FinishSpeakSequenceEx_Conversation;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue = CallFunc_FinishSpeakSequenceEx_ReturnValue;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation1 = CallFunc_FinishSpeakSequenceEx_Conversation1;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue1 = CallFunc_FinishSpeakSequenceEx_ReturnValue1;
	Parms.CallFunc_NewDialogContext_ReturnValue2 = CallFunc_NewDialogContext_ReturnValue2;
	Parms.CallFunc_NewDialogContext_ReturnValue3 = CallFunc_NewDialogContext_ReturnValue3;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation2 = CallFunc_FinishSpeakSequenceEx_Conversation2;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue2 = CallFunc_FinishSpeakSequenceEx_ReturnValue2;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation3 = CallFunc_FinishSpeakSequenceEx_Conversation3;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue3 = CallFunc_FinishSpeakSequenceEx_ReturnValue3;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent = MissionK2Node_ObjectiveEvent_ObjectiveEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount = MissionK2Node_ObjectiveEvent_ObjectiveCount;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents;
	Parms.K2Node_SwitchEnum28_CmpSuccess = K2Node_SwitchEnum28_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context = MissionK2Node_MissionCustomEvent_Context;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


