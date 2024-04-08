#pragma once
#ifndef HEADER_H
#define HEADER_H

class Hrebetni {
public:
	Hrebetni();
	virtual ~Hrebetni();

	virtual void opis() = 0;
};

class Ssavtsi : public Hrebetni {
public:
	Ssavtsi() {}
	virtual ~Ssavtsi() {}

	virtual void opis() = 0;
};

class Ptahy : public Hrebetni {
public:
	Ptahy();
	virtual ~Ptahy();

	virtual void opis() = 0;
};

class Tvaryny : public Ssavtsi {
public:
	Tvaryny();
	virtual ~Tvaryny();

	virtual void opis() = 0;
};

class Liudy : public Ssavtsi {
public:
	Liudy();
	virtual ~Liudy();

	void opis() override;
};

class Sobaky : public Tvaryny {
public:
	Sobaky();
	virtual ~Sobaky();

	void opis() override;
};

class Koty : public Tvaryny {
public:
	Koty();
	virtual ~Koty();

	void opis() override;
};

class Vorony : public Ptahy {
public:
	Vorony();
	virtual ~Vorony();

	void opis() override;
};

#endif // упеаерм╡_H
