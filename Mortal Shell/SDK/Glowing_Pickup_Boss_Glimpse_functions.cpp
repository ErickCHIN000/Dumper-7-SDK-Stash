#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Glowing_Pickup_Boss_Glimpse.Glowing_Pickup_Boss_Glimpse_C
// (Actor)

class UClass* AGlowing_Pickup_Boss_Glimpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Glowing_Pickup_Boss_Glimpse_C");

	return Clss;
}


// Glowing_Pickup_Boss_Glimpse_C Glowing_Pickup_Boss_Glimpse.Default__Glowing_Pickup_Boss_Glimpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGlowing_Pickup_Boss_Glimpse_C* AGlowing_Pickup_Boss_Glimpse_C::GetDefaultObj()
{
	static class AGlowing_Pickup_Boss_Glimpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGlowing_Pickup_Boss_Glimpse_C*>(AGlowing_Pickup_Boss_Glimpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Glowing_Pickup_Boss_Glimpse.Glowing_Pickup_Boss_Glimpse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBoss_Glimpse_Types     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGlowing_Pickup_Boss_Glimpse_C::UserConstructionScript(enum class EBoss_Glimpse_Types Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glowing_Pickup_Boss_Glimpse_C", "UserConstructionScript");

	Params::AGlowing_Pickup_Boss_Glimpse_C_UserConstructionScript_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Glowing_Pickup_Boss_Glimpse.Glowing_Pickup_Boss_Glimpse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGlowing_Pickup_Boss_Glimpse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glowing_Pickup_Boss_Glimpse_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Glowing_Pickup_Boss_Glimpse.Glowing_Pickup_Boss_Glimpse_C.ExecuteUbergraph_Glowing_Pickup_Boss_Glimpse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBoss_Glimpse_Types     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGlowing_Pickup_Boss_Glimpse_C::ExecuteUbergraph_Glowing_Pickup_Boss_Glimpse(int32 EntryPoint, enum class EBoss_Glimpse_Types Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glowing_Pickup_Boss_Glimpse_C", "ExecuteUbergraph_Glowing_Pickup_Boss_Glimpse");

	Params::AGlowing_Pickup_Boss_Glimpse_C_ExecuteUbergraph_Glowing_Pickup_Boss_Glimpse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


