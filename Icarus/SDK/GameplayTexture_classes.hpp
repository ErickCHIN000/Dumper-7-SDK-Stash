#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class GameplayTexture.GameplayTexture
class UGameplayTexture : public UObject
{
public:
	TArray<struct FColor>                        TextureData;                                       // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FIntPoint                             CachedResolution;                                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            SourceTexture;                                     // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             Resolution;                                        // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             BeginUV;                                           // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             EndUV;                                             // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayTexture* GetDefaultObj();

	class UTexture2D* GetSourceTexture();
};

// 0x0 (0x28 - 0x28)
// Class GameplayTexture.GameplayTextureFunctionLibrary
class UGameplayTextureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameplayTextureFunctionLibrary* GetDefaultObj();

	TArray<struct FColor> GetUniqueColours(class UGameplayTexture* Texture);
};

}


