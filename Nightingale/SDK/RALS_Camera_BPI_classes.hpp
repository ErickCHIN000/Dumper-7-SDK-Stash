#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass RALS_Camera_BPI.RALS_Camera_BPI_C
class IRALS_Camera_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRALS_Camera_BPI_C* GetDefaultObj();

	void BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, double* TraceRadius, enum class ETraceTypeQuery* TraceChannel);
	struct FTransform BPI_Get_3P_PivotTarget();
	struct FVector BPI_Get_FP_CameraTarget();
	void BPI_Get_CameraParameters(double* TP_FOV, double* FP_FOV, bool* RightShoulder);
};

}


