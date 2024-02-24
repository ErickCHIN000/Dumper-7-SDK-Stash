#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ActionStationUser.BPI_ActionStationUser_C
class IBPI_ActionStationUser_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ActionStationUser_C* GetDefaultObj();

	void ClearActionStationMode(bool* Success);
	void SetActionStationMode(bool* Success);
	void ClearBTreeActionStation(bool* Success);
	void SetBTreeActionStation(class AActor* ActionStation, bool* Success);
	void ServerStopMontage(bool* bSuccess);
	void ServerPlayMontage(class UAnimMontage* Montage, double PlayRate, class FName Section, bool bDisableBlendspace, bool bLooping, bool* bSuccess);
};

}


