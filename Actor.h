#pragma once

class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY, char NewShape);
	virtual ~AActor();

	// �Է��� �ϵ��� �޴°Ŵϱ� ����
	virtual void Tick();
	virtual void Render();

	bool operator<(const AActor* RHS)
	{
		return (this->SortOrder) < (RHS->SortOrder);
	}

	// ����ƽ�� ������ �ϵ� ���� �޸𸮿� �ö󰣴�
	static inline bool Compare (const AActor* LHS, const AActor* RHS)
	{
		return (LHS->SortOrder) < (RHS->SortOrder);
	}

	// ���� protected�� �´�..
public:
	// ��ǥ���� �־�� ���Ͱ� ��ġ�ϴϱ�
	int X;
	int Y;
	char Shape;

	// �׸��� ����
	int SortOrder = 1;

};

