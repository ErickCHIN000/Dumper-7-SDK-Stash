#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayTexture.GameplayTexture
// (None)

class UClass* UGameplayTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTexture");

	return Clss;
}


// GameplayTexture GameplayTexture.Default__GameplayTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTexture* UGameplayTexture::GetDefaultObj()
{
	static class UGameplayTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTexture*>(UGameplayTexture::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTexture.GameplayTexture.GetSourceTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UGameplayTexture::GetSourceTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTexture", "GetSourceTexture");

	Params::UGameplayTexture_GetSourceTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayTexture.GameplayTextureFunctionLibrary
// (None)

class UClass* UGameplayTextureFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTextureFunctionLibrary");

	return Clss;
}


// GameplayTextureFunctionLibrary GameplayTexture.Default__GameplayTextureFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTextureFunctionLibrary* UGameplayTextureFunctionLibrary::GetDefaultObj()
{
	static class UGameplayTextureFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTextureFunctionLibrary*>(UGameplayTextureFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTexture.GameplayTextureFunctionLibrary.GetUniqueColours
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayTexture*            Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FColor> UGameplayTextureFunctionLibrary::GetUniqueColours(class UGameplayTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTextureFunctionLibrary", "GetUniqueColours");

	Params::UGameplayTextureFunctionLibrary_GetUniqueColours_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


