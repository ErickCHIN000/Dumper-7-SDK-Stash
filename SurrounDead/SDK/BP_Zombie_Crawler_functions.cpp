#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Zombie_Crawler.BP_Zombie_Crawler_C
// (Actor, Pawn)

class UClass* ABP_Zombie_Crawler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Zombie_Crawler_C");

	return Clss;
}


// BP_Zombie_Crawler_C BP_Zombie_Crawler.Default__BP_Zombie_Crawler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Zombie_Crawler_C* ABP_Zombie_Crawler_C::GetDefaultObj()
{
	static class ABP_Zombie_Crawler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Zombie_Crawler_C*>(ABP_Zombie_Crawler_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Zombie_Crawler.BP_Zombie_Crawler_C.GetMarker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MarkerOffset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Crawler_C::GetMarker(class UTexture2D** Texture, struct FLinearColor* Color, double* MarkerOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Crawler_C", "GetMarker");

	Params::ABP_Zombie_Crawler_C_GetMarker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (MarkerOffset != nullptr)
		*MarkerOffset = Parms.MarkerOffset;

}


// Function BP_Zombie_Crawler.BP_Zombie_Crawler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Zombie_Crawler_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Crawler_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Zombie_Crawler.BP_Zombie_Crawler_C.ExecuteUbergraph_BP_Zombie_Crawler
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMesh*>       CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// TArray<class UMaterial*>           CallFunc_Map_Values_Values                                       (ReferenceParm)
// class USkeletalMesh*               CallFunc_Array_Random_OutItem                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   CallFunc_Array_Random_OutItem_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Crawler_C::ExecuteUbergraph_BP_Zombie_Crawler(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_RandomBool_ReturnValue, TArray<class USkeletalMesh*>& CallFunc_Map_Keys_Keys, TArray<class UMaterial*>& CallFunc_Map_Values_Values, class USkeletalMesh* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UMaterial* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, double CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Zombie_Crawler_C", "ExecuteUbergraph_BP_Zombie_Crawler");

	Params::ABP_Zombie_Crawler_C_ExecuteUbergraph_BP_Zombie_Crawler_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_Random_OutItem_1 = CallFunc_Array_Random_OutItem_1;
	Parms.CallFunc_Array_Random_OutIndex_1 = CallFunc_Array_Random_OutIndex_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


