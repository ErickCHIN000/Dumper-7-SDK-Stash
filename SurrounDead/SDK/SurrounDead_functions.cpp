#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SurrounDead.DistanceSort
// (None)

class UClass* UDistanceSort::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DistanceSort");

	return Clss;
}


// DistanceSort SurrounDead.Default__DistanceSort
// (Public, ClassDefaultObject, ArchetypeObject)

class UDistanceSort* UDistanceSort::GetDefaultObj()
{
	static class UDistanceSort* Default = nullptr;

	if (!Default)
		Default = static_cast<UDistanceSort*>(UDistanceSort::StaticClass()->DefaultObject);

	return Default;
}


// Function SurrounDead.DistanceSort.Distance_Sort
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AActor*>              Array_To_Sort                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class AActor*                      From_Actor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Descending                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FActor_Dist>         Sorted_Array                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UDistanceSort::Distance_Sort(const TArray<class AActor*>& Array_To_Sort, class AActor* From_Actor, bool Descending, TArray<struct FActor_Dist>* Sorted_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DistanceSort", "Distance_Sort");

	Params::UDistanceSort_Distance_Sort_Params Parms{};

	Parms.Array_To_Sort = Array_To_Sort;
	Parms.From_Actor = From_Actor;
	Parms.Descending = Descending;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sorted_Array != nullptr)
		*Sorted_Array = std::move(Parms.Sorted_Array);

}


// Class SurrounDead.GetStreamedLevel
// (None)

class UClass* UGetStreamedLevel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetStreamedLevel");

	return Clss;
}


// GetStreamedLevel SurrounDead.Default__GetStreamedLevel
// (Public, ClassDefaultObject, ArchetypeObject)

class UGetStreamedLevel* UGetStreamedLevel::GetDefaultObj()
{
	static class UGetStreamedLevel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetStreamedLevel*>(UGetStreamedLevel::StaticClass()->DefaultObject);

	return Default;
}


// Function SurrounDead.GetStreamedLevel.GetActorStreamingLevelName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UGetStreamedLevel::GetActorStreamingLevelName(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetStreamedLevel", "GetActorStreamingLevelName");

	Params::UGetStreamedLevel_GetActorStreamingLevelName_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


