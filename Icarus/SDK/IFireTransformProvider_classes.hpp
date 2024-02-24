#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IFireTransformProvider.IFireTransformProvider_C
class IIFireTransformProvider_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIFireTransformProvider_C* GetDefaultObj();

	void GetFireTransform(bool* Success, struct FTransform* FireTransform);
};

}


