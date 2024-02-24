#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IHuntingInterface.IHuntingInterface_C
class IIHuntingInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIHuntingInterface_C* GetDefaultObj();

	void GetHuntingWidgetLocation(struct FVector* Location);
	void GatherSplineLocations(bool* Return, TArray<struct FVector>* Locations);
	void SendSplineLocations(TArray<struct FVector>& Locations);
};

}


