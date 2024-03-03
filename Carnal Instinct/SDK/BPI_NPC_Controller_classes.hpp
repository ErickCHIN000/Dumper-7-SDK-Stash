#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NPC_Controller.BPI_NPC_Controller_C
class IBPI_NPC_Controller_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_NPC_Controller_C* GetDefaultObj();

	void FnUnpauseRoutine();
	void FnPauseRoutine();
	void FnSetOcclusionVisibility(class AActor* Player_Reference, bool Is_Visible);
	void FnInterruptRoutine(const struct FStruct_NPC_ProfilesList& Profiles, const struct FVector2D& Duration_Range__Min__Max_, bool Permanent_Change);
	void FnArrivedAtStation(class ABP_Station_Base_C* Station_Reference, const struct FStruct_NPC_StationInfo& Station_Info);
	void FnArrivedAtPOI(class ABP_NPC_POI_Base_C* Parent_POI);
};

}


